#ifndef SENSOR_H
#define SENSOR_H
#include <time.h>
#include <iostream>
#include <fstream>
#include <string>



using namespace std;

template <class T>
class Sensor{
    protected:
    T valSense;

    public:
        Sensor(); //constructeur par défaut
        Sensor(T valSense); // constructeur par argument
        Sensor(const Sensor&); //Constructeur par recopie

        //Surcharge opérateur

        Sensor& operator = (const Sensor&);

        
        ~Sensor(); // Destructeur

        //methodes :
        T sendData();
        
        T aleaGenVal();    
};
//constructeur par défaut 
template <class T>
Sensor<T>::Sensor():
    valSense(aleaGenVal()){}

template <class T>
Sensor<T>::Sensor(T valSense){
    this->valSense = valSense;
}

template <class T>
Sensor<T>::Sensor(const Sensor& sensor){
    this->valSense = sensor.valSense;
}



template <class T>
Sensor<T>& Sensor<T>:: operator=(const Sensor& sensor){
    this->valSense = sensor.valSense;
    sensor.~Sensor();
    return *this;
}

template <class T>
Sensor<T>::~Sensor(){
}

//methodes : 
template <class T>
T Sensor<T>::sendData(){
    valSense = aleaGenVal();
    return this->valSense;
};

template <class T>
T Sensor<T>::aleaGenVal(){
    // verif if T is a boolean or not // source : stackflow
    if(std::is_same<decltype(this->valSense), bool>::value){
        return rand() % 2;
    }
    //if it's not a boolean, we can do like if it is an int
    return (T)(0) + (T)rand()/((T)RAND_MAX/(T)(100));

};

#endif