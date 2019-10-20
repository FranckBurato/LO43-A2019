//
//  Sensor.hpp
//  lo43tp
//
//  Created by 任怡桦 on 2019/10/17.
//  Copyright © 2019年 renyihua. All rights reserved.
//

#ifndef Sensor_h
#define Sensor_h

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

template <class T>
class Sensor{
private:
    T valSense;
    T aleaGenVal();
    
public:
    Sensor();
    Sensor(T vS);//constructeur par défaut
    Sensor(const Sensor& s);//constructeur par recopie
    ~Sensor(){}//destructeur
    Sensor& operator=(Sensor& s);//opérateur d'affectation
    T sendData();//renvoyer le data de capteur
    void NewValue();//avoir les datas différents
    virtual string getTypSsr()=0;//redéfinir dans les classes de fille
};


template<class T>
T Sensor<T>::aleaGenVal(){
    if(typeid(valSense)==typeid(bool)){
        return rand() % 2;
    }
    else{
        return (T)(rand()%(101)) + (T)(0);
    }
}

template<class T>
Sensor<T>::Sensor():valSense(aleaGenVal()){};


template<class T>
Sensor<T>::Sensor(T vS){//constructeur par défaut
    valSense=vS;
}

template<class T>
Sensor<T>::Sensor(const Sensor& s){//constructeur par recopie
    valSense=s.valSense;
}

template<class T>
Sensor<T>& Sensor<T>::operator=(Sensor& s){//opérateur d'affectation
    valSense=s.valSense;
    return *this;
}

template<class T>
T Sensor<T>::sendData(){//renvoyer le data de capteur
    return valSense;
}

template <class T>
void Sensor<T>::NewValue(){
    valSense = aleaGenVal();
}


#endif /* Sensor_hpp */
