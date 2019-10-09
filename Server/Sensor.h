//
// Created by Alomb on 09/10/2019.
//

#ifndef SERVER_SENSOR_H
#define SERVER_SENSOR_H


template <typename T> class Sensor {
protected:
    T valSense;
public:
    Sensor(): valSense(){}
    Sensor(Sensor& autre): valSense(autre.valSense){}
    Sensor& operator=(const Sensor<T> autre){
        this->valSense = autre.valSense;
        return *this;
    }
    virtual ~Sensor()= default;
    Sensor(T valRcv): valSense(valRcv){}

    T sendData(){
        return valSense;
    }

private:
    virtual void aleaGenVal()=0;
};


#endif //SERVER_SENSOR_H
