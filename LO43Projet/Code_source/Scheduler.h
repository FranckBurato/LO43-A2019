//
//  Scheduler.hpp
//  lo43tp
//
//  Created by 任怡桦 on 2019/10/17.
//  Copyright © 2019年 renyihua. All rights reserved.
//

#ifndef Scheduler_h
#define Scheduler_h

#include <iostream>
#include "Server.h"
#include "DiffTypSensor.h"
using namespace std;

class Scheduler{
private:
    //Les différents types de capteurs
    Temperature t;
    Humidity h;
    Light l;
    Sound s;
    //Le serveur correspondant
    Server sv;
public:
    Scheduler();
    void getData();//recevoir les datas de capteurs
};

#endif /* Scheduler_h */
