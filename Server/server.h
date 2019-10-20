#ifndef SERVER_H
#define SERVER_H
#include <fstream>
#include <iostream>
#include <string>

#include "sensor.h"
using namespace std;
class Server
{

public:
    Server();
    //Server(int capteur1,int capteur2,int capteur3);
    Server(int nbrOfSensors,bool consolActivation,bool logActivation);
    Server(const Server & serv);
    Server& operator=(const Server& serv);
    ~Server();
    template<typename T>void dataRcv(T dataSens);
    template<typename T>void consoleWrite(T dataSens_p);
    template<typename T>void fileWrite(T dataSens_p);
	template<typename T>void operator<<(T data);   
	friend void operator<<(std::string dataString, int numSens);//changer

private:
    int nbrOfSensors;
    bool consolActivation;
    bool logActivation;
//    int capteur1;
//    int capteur2;
//    int capteur3;
};


std::ostream& operator << (std::ostream& sortie, const Server & n);



template<typename T>
void Server::operator<<(T data){
    this->consoleWrite(data);
    
}

template<typename T>
void Server::dataRcv(T dataSens){
    if(this->consolActivation==true){
        this->consoleWrite(dataSens);
    }
    if(this->logActivation==true){
        this->fileWrite(dataSens);
    }

}
template<typename T>
void Server::consoleWrite(T dataSens_p){
    cout<<"capteur : "<<dataSens_p<<endl;
}
template<typename T>
void Server::fileWrite(T dataSens_p){

    ofstream mylog;
    mylog.open("log/log_file_capteur.txt", ios::out | ios::app );
    mylog << dataSens_p <<"\n\n";
    mylog.close();


}

#endif // SERVER_H
