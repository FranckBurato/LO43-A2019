#include "server.h"

using namespace std;

//Server::Server(int capteur1,int capteur2,int capteur3)
//{
//this->capteur1=capteur1;
//this->capteur2=capteur2;
//this->capteur3=capteur3;
//}
Server::Server():nbrOfSensors(),consolActivation(),logActivation(){}

Server::Server(int nbrOfSensors,bool consolActivation,bool logActivation){
    this->nbrOfSensors=nbrOfSensors;
    this->consolActivation=consolActivation;
    this->logActivation=logActivation;
}

Server::Server(const Server & serv){
    this->nbrOfSensors=serv.nbrOfSensors;
    this->consolActivation=serv.consolActivation;
    this->logActivation=serv.logActivation;
}

Server& Server::operator=(const Server& serv){
	if(this != &serv){
	    this->nbrOfSensors=serv.nbrOfSensors;
	    this->consolActivation=serv.consolActivation;
	    this->logActivation=serv.logActivation;
	}
    return *this;
}
Server::~Server(){
}

//sinon fair un gether dans chaque
void operator<<(std::string dataString,int numSens){
    ofstream mylog;
    if(numSens==1){
    	mylog.open("log/log_file_capteur_temperature.txt", ios::out | ios::app );
	    mylog << dataString <<"\n\n";
	    mylog.close();	
	}else if (numSens==2){
		mylog.open("log/log_file_capteur_humidity.txt", ios::out | ios::app );
	    mylog << dataString <<"\n\n";
	    mylog.close();	
	}else if (numSens==3){
		mylog.open("log/log_file_capteur_light.txt", ios::out | ios::app );
	    mylog << dataString <<"\n\n";
	    mylog.close();	
	}else if (numSens==4){
		mylog.open("log/log_file_capteur_sound.txt", ios::out | ios::app );
	    mylog << dataString <<"\n\n";
	    mylog.close();	
	}else{
	    mylog.open("log/log_file_capteur.txt", ios::out | ios::app );
	    mylog << dataString <<"\n\n";
	    mylog.close();
	}
}

ostream& operator << (ostream& sortie, const Server & n){
  //  n.fileWrite();
    //n.consoleWrite();
    cout<<"ancien version à ne pas utiliser"<<endl;
    return sortie;
}


