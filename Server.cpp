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

Server::Server(int capteur) {
    this->capteur = capteur;
}
Server::~Server() {}

Server::Server(const Server& s) {
    this->capteur = s.capteur;
}
Server& Server::operator=(const Server& s) {
    this->capteur = s.capteur;
    return *this;
}

void Server::consoleWrite() {
    cout << this->capteur << std::endl;
}
void Server::fileWrite() {
    cout << "Voici les donnees." << endl;
}

istream& operator>>(istream& input, Server& s){
    input>>s.capteur;
    return input;
}
