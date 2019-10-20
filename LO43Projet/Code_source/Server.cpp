//
//  server.cpp
//  lo43tp
//
//  Created by 任怡桦 on 2019/10/5.
//  Copyright © 2019年 renyihua. All rights reserved.
//


#include <iostream>
#include "Server.h"
using namespace std;

Server::Server(int nbS,bool cA,bool lA) :nbSensors(nbS),consoleActivation(cA),logActivation(lA){}

Server::Server(const Server& s) {
    nbSensors = s.nbSensors;
    consoleActivation=s.consoleActivation;
    logActivation=s.logActivation;
}

Server& Server::operator=(const Server& s) {
    nbSensors = s.nbSensors;
    consoleActivation=s.consoleActivation;
    logActivation=s.logActivation;
    return *this;
}

