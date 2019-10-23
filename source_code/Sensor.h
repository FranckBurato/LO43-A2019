#pragma once

#ifndef SENSOR_H
#define SENSOR_H

#include<string>
#include <iostream>
#include"stdlib.h"
#include"time.h"
using namespace std;



template <class T>
class Sensor {
private:
	
	T valSense;
	
	T aleaGenVal() {
		srand(time(NULL)); 
		if (this->type == "Light")   
		{
           return (bool)rand(); 
		}
		return rand() % 100;           
	}


public:
	string type;
	Sensor() { this->valSense = aleaGenVal(); }                                 //第一次数据类型要相同？？？？？

	Sensor(const Sensor& s) :valSense(s.valSense), type(s.type) {}

	Sensor(T val, string t) :valSense(val), type(t){}

	 ~Sensor() {}

	T sendData() //la methode permet d'envoyer la valeur aleatoire Recue par  "ValSense" du "Serveur" 
	{
		return this->valSense;
	}
	string sendName() { return type; }

	Sensor(T valRcv)
	{
		this->valSense = valRcv;
	}// permet d'attribuer la valeur reçue à l'attribut "ValSense" 


	Sensor& operator=(const Sensor& s) {
		valSense = s.valSense;
		type = s.type;

		return *this;
	}
};



class Temperature :public Sensor<float> {
private:
public:

	Temperature() :Sensor(0, "Temperature") {}

	~Temperature() {}

	Temperature(float val) :Sensor(val, "Temperature") {}

	
};



class  Humidity : public Sensor<float> {
private:
public:

	Humidity() :Sensor(0, "Humidity") {}

	~Humidity() {}

	Humidity(float val) :Sensor(val, "Humidity") {}

	
};


class Sound :public  Sensor<int> {
private:
public:
	Sound() :Sensor(0, "Sound") {}

	~Sound() {}

	Sound(int val) :Sensor(val, "Sound") {}
	
	
};


class Light: public Sensor <bool> {
private:
public:
	Light() :Sensor(0, "Light") {}

	~Light() {}

	Light(bool val) :Sensor(val, "Light") {}
	
	
};



#endif