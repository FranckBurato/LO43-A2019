//
//  server.h
//  lo43tp
//
//  Created by 任怡桦 on 2019/10/5.
//  Copyright © 2019年 renyihua. All rights reserved.
//

#ifndef server_h
#define server_h
#include<iostream>
using namespace std;

class Server{
private:
    int capteur;
public:
    Server(int capteur);//constructeur par défaut
    ~Server();//destructeur
    Server(const Server& s);//constructeur par recopie
    Server& operator=(const Server& s);//operator d'affectation
    void consoleWrite();//visualiser les données arrivantes dans la console
    void fileWrite();//stocker les données des capteurs dans des fichiers de logs
    friend istream& operator>>(istream &input, Server& s);
};

#endif /* server_h */
