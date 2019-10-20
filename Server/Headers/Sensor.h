//
// Created by Alomb on 19/10/2019.
//

#ifndef LO43SERVER_SENSOR_H
#define LO43SERVER_SENSOR_H


#include <string>
#include <sstream>
#include <iomanip>
#include <chrono>
#include <iostream>
#include "Data.h"
#include "SensorInterface.h"

template <typename T> class Sensor : public SensorInterface{
protected:
    T valSense;
    double lastDataSending;
    double sendingInterval;
public:
    Sensor(): valSense(), lastDataSending(), sendingInterval(){}

    Sensor(const Sensor& autre): valSense(autre.valSense), lastDataSending(autre.lastDataSending), sendingInterval(autre.sendingInterval){}

    virtual ~Sensor(){}

    Sensor& operator=(const Sensor& autre){
        this->valSense = autre.valSense;
        this->sendingInterval = autre.sendingInterval;
        this->lastDataSending = autre.lastDataSending;
        return *this;
    }

    Data& sendData(){
        if (canSend()){
            lastDataSending = std::chrono::system_clock::now().time_since_epoch().count();
            aleaGenVal();
            std::ostringstream ss;
            ss << std::fixed << std::setprecision(1) << std::boolalpha << valSense;
            std::string s(ss.str());
            return *new Data(s,getPath());
        } else{
            return *new Data("null","null");
        }
    }

    void setSendingInterval(const double nbMilliseconds){
        sendingInterval = nbMilliseconds * 1000000;
    }

private:
    bool canSend(){
        return (std::chrono::system_clock::now().time_since_epoch().count() - lastDataSending) > sendingInterval;
    }

    virtual void aleaGenVal()=0;
    virtual std::string getPath()=0;
};


#endif //LO43SERVER_SENSOR_H
