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

template <class T> class Sensor
{
    public:
        Sensor ();
        virtual ~Sensor ();
	    Sensor(const Sensor& sensor);
        Sensor(T valSense);
	    std::string sendData();
	    void aleaGen();
	    Sensor<T>& operator=(const Sensor& sensor);
	    //std::ostream& operator<<(std::ostream& os, const Sensor& sensor);
    protected:
        /* private data */
	    T value;
	    std::string id;
};

template <class T> Sensor<T>::Sensor() : value(), id("Default Sensor"){}

template <class T> Sensor<T>::~Sensor(){}

template <class T> Sensor<T>::Sensor(const Sensor& sensor) : value(sensor.value), id(sensor.id){}

template <class T> Sensor<T>::Sensor(T value) : value(value), id(id){}

template <class T> Sensor<T>& Sensor<T>::operator=(const Sensor& sensor){
    this->value=sensor.value;
    this->id=sensor.id;
    return *this;
}

template <class T> std::string Sensor<T>::sendData(){
    std::string data = this->id + " : " + std::to_string(this->value);
    return data;
}

/*std::ostream& operator<<(std::ostream& os, const Sensor<T>& sensor){
    os << sensor.id << " : " << sensor.value << std::endl;
    return os;
}*/

template <class T> void Sensor<T>::aleaGen(){
    if (std::is_same<T, bool>::value){
	this->value = 1;
    }
    if (std::is_same<T, float>::value){
	this->value = 21.2;
    }
    if (std::is_same<T, int>::value){
	this->value = 3;
    }
}
#endif /* end of include guard Sensor_HPP */

