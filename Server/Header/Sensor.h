//
// Created by Alomb on 09/10/2019.
//

#ifndef SERVER_SENSOR_H
#define SERVER_SENSOR_H


#include "Data.h"

template <typename T> class Sensor {
protected:
    T valSense;
public:
    Sensor(): valSense(){}

    Sensor(const Sensor& autre): valSense(autre.valSense){}

    virtual ~Sensor(){}

    Sensor& operator=(const Sensor& autre){
        this->valSense = autre.valSense;
        return *this;
    }

    Sensor(T valRcv): valSense(valRcv){}

    Data sendData(){
        aleaGenVal();
        std::string data;
        data << std::boolalpha << valSense;
        return new Data(data,getPath());
    }


private:
    virtual void aleaGenVal()=0;
    virtual std::string getPath()=0;
};


#endif //SERVER_SENSOR_H
