#ifndef SENSOR_H
#define SENSOR_H
#include <iostream>
#include <time.h>


using namespace std;

template <class T>
class Sensor{

    private:
        T valSense;
        T aleaGenVal();

    public:
        //forme canonique
        Sensor();
        Sensor(T i);
        Sensor(const Sensor&);
        virtual ~Sensor();
        Sensor& operator=(const Sensor&);
        
        T sendData();
        void resetValue();
        virtual string getName()=0;

};


template <class T>
Sensor<T>::Sensor(): valSense(aleaGenVal()){}
template <class T>
Sensor<T>::Sensor(T v){
    this->valSense = v;
}
template <class T>
Sensor<T>::Sensor(const Sensor& s){
    this->valSense = s.valSense;
}

template <class T>
Sensor<T>::~Sensor(){}

template <class T>
T Sensor<T>::aleaGenVal(){
    //on regarde si le type est boolean, car on ne peut pas generer un bool
    //random de la meme facon qu'un float ou un int
    if(std::is_same<decltype(this->valSense), bool>::value){
        return rand() % 2;
    }
    //s'il ne s'agit pas d'un boolean alors on génère un nombre random selon le type désiré
    return (T)(0) + (T)rand()/((T)RAND_MAX/(T)(100));

}

template <class T>
void Sensor<T>::resetValue(){
    this->valSense = aleaGenVal();
}
template <class T>
T Sensor<T>::sendData(){
    return this->valSense;
}
template <class T>
Sensor<T>& Sensor<T>::operator=(const Sensor& s){
    this->valSense = s.valSense;

    return *this;
}


#endif