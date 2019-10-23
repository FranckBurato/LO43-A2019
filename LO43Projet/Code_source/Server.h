//
//  server.h
//  lo43tp
//
//  Created by 任怡桦 on 2019/10/5.
//  Copyright © 2019年 renyihua. All rights reserved.
//

#ifndef Server_h
#define Server_h
#include <iostream>
#include <fstream>
using namespace std;

class Server{
private:
    int nbSensors;
    bool consoleActivation;
    bool logActivation;
public:
    Server();
    Server(int nbS,bool cA,bool lA);//constructeur par défaut
    Server(const Server& s);//constructeur par recopie
    ~Server(){}//destructeur
    Server& operator=(const Server& s);//operator d'affectation
    
    template <class T>
    void dataRcv(string typeSens,T dataSens);
    template <class T>
    void consoleWrite(string typeSens, T dataSens);//visualiser les données arrivantes dans la console
    template <class T>
    void fileWrite(string typeSens, T dataSens);//stocker les données des capteurs dans des fichiers de logs
};

template <class T>
void Server::dataRcv(string typeSens,T dataSens){
    if(consoleActivation==true){
        consoleWrite(typeSens,dataSens);
    }
    if(logActivation==true){
        fileWrite(typeSens,dataSens);
    }
}

template <class T>
void Server::consoleWrite(string typeSens, T dataSens){
    cout <<"  "<< typeSens << " : " << dataSens << endl;
}


template <class T>
void Server::fileWrite(string typeSens, T dataSens){
    ofstream op;
   if(typeSens=="Temperature"){
        op.open("Log_Capteur_Temperature.txt",ios::app);
        op << typeSens << " : " << dataSens << endl << endl;
        op.close();
    }
    else if (typeSens=="Humidity"){
        op.open("Log_Capteur_Humidity.txt",ios::app);
        op << typeSens << " : " << dataSens << endl << endl;
        op.close();
    }
    else if (typeSens=="Light"){
        op.open("Log_Capteur_Light.txt",ios::app);
        op << typeSens << " : " << dataSens << endl << endl;
        op.close();
    }
    else if (typeSens=="Sound"){
        op.open("Log_Capteur_Sound.txt",ios::app);
        op << typeSens << " : " << dataSens << endl <<endl;
        op.close();
    }
    else{
        cout << "ERREUR : Impossible d'ouvrir le fichier." << endl;
    }
}

#endif /* Server_h */
