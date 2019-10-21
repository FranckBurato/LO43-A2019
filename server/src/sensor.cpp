/**
 * @author      : pinembour (pinembour@$HOSTNAME)
 * @file        : Sensor
 * @created     : Wednesday Oct 09, 2019 13:24:33 CEST
 */

#include "Sensor.hpp"

template <class T> Sensor<T>::Sensor() : value(), id("Default Sensor"){}

template <class T> Sensor<T>::~Sensor(){}

template <class T> Sensor<T>::Sensor(const Sensor& sensor) : value(sensor.value), id(sensor.id){}

template <class T> Sensor<T>::Sensor(int value) : value(value), id(id){}

template <class T> Sensor& Sensor<T>::operator=(const Sensor& sensor){
    this->value=sensor.value;
    this->id=sensor.id;
    return *this;
}

string T Sensor<T>::sendData(){
    string data = this->id + " : " + this->value;
    return data;
}

template <class T> Sensor<T>::aleaGen(){
    this->valSense = 3;  //Figure out how to do random for a template
