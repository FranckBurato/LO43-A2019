//
//  DiffTypSensor.h
//  lo43tp
//
//  Created by 任怡桦 on 2019/10/17.
//  Copyright © 2019年 renyihua. All rights reserved.
//

#ifndef DiffTypSensor_h
#define DiffTypSensor_h
#include<iostream>
#include<string>
#include"Sensor.h"
using namespace std;

class Temperature : public Sensor<float>{
public:
    string getTypSsr(){
        return "Temperature";
    }
};

class Humidity : public Sensor<float>{
public:
    string getTypSsr(){
        return "Humidity";
    }
};

class Light : public Sensor<bool>{
public:
    string getTypSsr(){
        return "Light";
    }
};

class Sound : public Sensor<int>{
public:
    string getTypSsr(){
        return "Sound";
    }
};


#endif /* DiffTypSensor_h */
