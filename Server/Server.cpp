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
//operateur de sortie
void Server::operator<<(int dataSens){
    this->consoleWrite(dataSens);
    
}
void operator<<(string dataSens_toString, int dataSens){
    ofstream mylog;
    mylog.open("log/log_file_capteur.txt", ios::out | ios::app );
    mylog << dataSens <<"\n\n";
    mylog.close();
}



void Server::consoleWrite(int dataSens_p){
    cout << dataSens_p << "\n";
}
void Server::fileWrite(int dataSens_p){
    ofstream mylog;
    mylog.open("log/log_file_capteur.txt", ios::out | ios::app );
    mylog << dataSens_p <<"\n\n";
    mylog.close();
}

void Server::dataRcv(int dataSens){
    if(this->consolActivation==true){
        this->consoleWrite(dataSens);
    }
    if(this->logActivation==true){
        this->fileWrite(dataSens);
    }
}


