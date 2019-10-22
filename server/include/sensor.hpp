/**
 * @author      : pinembour (pinembour@$HOSTNAME)
 * @file        : Sensor
 * @created     : Wednesday Oct 09, 2019 13:24:59 CEST
 */

#ifndef Sensor_HPP

#define Sensor_HPP
#include <string>
#include <iostream>
#include <type_traits>
#include <ctime>
#include <cstdlib>


template <class T> class Sensor
{
    public:
        //Coplien form
        Sensor ();
        virtual ~Sensor ();
        Sensor(const Sensor& sensor);
        Sensor(std::string id);
        Sensor<T>& operator=(const Sensor& sensor);

        std::string sendData() const;
        //Basically a "get" statement that we use in scheduler

        void aleaGen();
        //Generate a random value according to the type of the sensor

    protected:
        /* private data */
        T value;
        std::string id;
};

//Coplien form
template <class T> Sensor<T>::Sensor() : value(), id("Default Sensor"){}
template <class T> Sensor<T>::~Sensor(){}
template <class T> Sensor<T>::Sensor(const Sensor& sensor) : value(sensor.value), id(sensor.id){}
template <class T> Sensor<T>::Sensor(std::string id) : value(), id(id){}
template <class T> Sensor<T>& Sensor<T>::operator=(const Sensor& sensor){
    this->value=sensor.value;
    this->id=sensor.id;
    return *this;
}

template <class T> std::string Sensor<T>::sendData() const{
    //Basically a "get" statement that we use in scheduler
    std::string data = this->id + " : " + std::to_string(this->value);
    return data;
}

template <class T> void Sensor<T>::aleaGen(){
    //Generate a random value according to the type of the sensor
    if (std::is_same<T, bool>::value){
        this->value = rand() % 2;
    }
    if (std::is_same<T, float>::value){
        this->value = -40.0 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(100.0)));
    }
    if (std::is_same<T, int>::value){
        this->value = (rand() % static_cast<int>(140 + 1));
    }
}
#endif /* end of include guard Sensor_HPP */

