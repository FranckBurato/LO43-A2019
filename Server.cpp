#include "Server.h"
//Constructeur par défaut
Server::Server():nbrOfSensors(), consolActivation(),
            logActivation(){}
 

//Constructeur avec argument
Server::Server(int nbrOfSensors,bool consolActivation,bool logActivation){
    this->nbrOfSensors = nbrOfSensors;
    this->consolActivation = consolActivation;
    this->logActivation = logActivation;
}

//Constructeur par recopie
Server::Server(const Server& server){
        this -> nbrOfSensors= server.nbrOfSensors;
        this->consolActivation = server.consolActivation;
        this->logActivation = server.logActivation;
}

Server& Server:: operator=(const Server& server){
     if(this != &server){
        this->nbrOfSensors = server.nbrOfSensors;
        this->consolActivation = server.consolActivation;
        this->logActivation = server.logActivation;
    }
    return *this;
}

void Server::operator<<(int dataSens){
    this->consoleWrite(dataSens);
   
}

void operator<<(string dataSens_toString, int dataSens){
    ofstream mylog;
    mylog.open("log/log_file_capteur.txt", ios::out | ios::app );
    mylog << dataSens <<"\n\n";
    mylog.close();
}



/* Server& Server:: operator <<(const Server& server){
    fileWrite(Server.nbrOfSensors);
    return *this;
}*/

//Destructeur
Server::~Server(){

}


void Server::consoleWrite(int dataSens_p){
    cout << dataSens_p << "\n";
}
void Server::fileWrite(int dataSens_p){
    ofstream logs;
    logs.open("log_capteur.txt", ios::out | ios::app );
    logs << dataSens_p <<"\n\n";
    logs.close();
}
 
void Server::dataRcv(int dataSens){
    if(this->consolActivation==true){
        this->consoleWrite(dataSens);
    }
    if(this->logActivation==true){
        this->fileWrite(dataSens);
    }
}

