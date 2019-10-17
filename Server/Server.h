#include <iostream>
#include <string>
#include <fstream>

using namespace std;


class Server{
    private:
        int nbrOfSensors;
        bool consolActivation;
        bool logActivation;

        template <typename T>
        void consoleWrite(string type_of_sensor, T data);
        template <typename T>
        void fileWrite(string type_of_sensor, T data); 

    public:
        /*** FORME CANONIQUE DE COPLIEN ***/
        //constructeur par défaut
        Server();
        Server(int, bool, bool);
        //constructeur de recopie
        Server(const Server& server);
        //destructeur
        ~Server();
        //Operateur d'affectation
        Server& operator=(const Server& server);
        template <typename T> void dataRcv(string type_of_sensor, T data);

        

        
};




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
template <typename T>
void Server::consoleWrite(string type_of_sensor, T dataSens_p){
    cout << "\t" << type_of_sensor << ": " << dataSens_p << "\n";
}
template <typename T>
void Server::fileWrite(string type_of_sensor, T dataSens_p){
    ofstream mylog;
    mylog.open("log/log_file_capteur.txt", ios::out | ios::app );
    mylog << "\t" << type_of_sensor << ": " << dataSens_p <<"\n\n";
    mylog.close();
}
template <class T>
void Server::dataRcv(string type_of_sensor,T dataSens){
    if(this->consolActivation==true){
        this->consoleWrite(type_of_sensor, dataSens);
    }
    if(this->logActivation==true){
        this->fileWrite(type_of_sensor, dataSens);
    }
}


