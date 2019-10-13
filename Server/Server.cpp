#include "Server.h"


//Constructeur par defaut
Server::Server():nbrOfSensors(), consolActivation(), 
            logActivation(){}

Server::Server(int nb, bool consolAc, bool logAc){
    this->nbrOfSensors = nb;
    this->consolActivation = consolAc;
    this->logActivation = logAc;

}
//contructeur de recopie
Server::Server(const Server& server){
    this->nbrOfSensors = server.nbrOfSensors;
    this->consolActivation = server.consolActivation;
    this->logActivation = server.logActivation;
}
//destructeur
Server::~Server(){
    
}
//Operateur d'affectation
Server& Server:: operator=(const Server& server){
    if(this != &server){
        this->nbrOfSensors = server.nbrOfSensors;
        this->consolActivation = server.consolActivation;
        this->logActivation = server.logActivation;
    }
    return *this;
}

void Server::consoleWrite(string type_of_sensor, int dataSens_p){
    cout << "\t" << type_of_sensor << ": " << dataSens_p << "\n";
}
void Server::fileWrite(string type_of_sensor, int dataSens_p){
    ofstream mylog;
    mylog.open("log/log_file_capteur.txt", ios::out | ios::app );
    mylog << "\t" << type_of_sensor << ": " << dataSens_p <<"\n\n";
    mylog.close();
}

void Server::dataRcv(string type_of_sensor,int dataSens){
    if(this->consolActivation==true){
        this->consoleWrite(type_of_sensor, dataSens);
    }
    if(this->logActivation==true){
        this->fileWrite(type_of_sensor, dataSens);
    }
}


