/**
 * @author      : pinembour (pinembour@$HOSTNAME)
 * @file        : Sensor
 * @created     : Wednesday Oct 09, 2019 13:24:33 CEST
 */

#include "Sensor.hpp"

template <class T> Sensor<T>::Sensor() : value(){}

template <class T> Sensor<T>::~Sensor(){}

template <class T> Sensor<T>::Sensor(const Sensor& sensor) : value(sensor.value){}

template <class T> Sensor<T>::Sensor(int value) : value(value){}

template <class T> Sensor& Sensor<T>::operator=(const Sensor& sensor){
    this->value=sensor.value;
    return *this;
}

template <class T> T Sensor<T>::sendData(){
    return this->valSense;
}

template <class T> Sensor<T>::aleaGen(){
    this->valSense = 3;  //Figure out how to do random for a template
