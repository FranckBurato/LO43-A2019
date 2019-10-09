#include "server.h"


using namespace std;

Server::Server(int capteur1,int capteur2,int capteur3)
{
this->capteur1=capteur1;
this->capteur2=capteur2;
this->capteur3=capteur3;
}
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
    this->nbrOfSensors=serv.nbrOfSensors;
    this->consolActivation=serv.consolActivation;
    this->logActivation=serv.logActivation;
    return *this;
}
Server::~Server(){
}
void Server::dataRcv(int dataSens){
    if(this->consolActivation==true){
        this->consoleWrite(dataSens);
    }
    if(this->logActivation==true){
        this->fileWrite(dataSens);
    }

}
void Server::consoleWrite(int dataSens_p){
    cout<<"capteur : "<<dataSens_p<<endl;
}
void Server::fileWrite(int dataSens_p){

    ofstream mylog;
    mylog.open("log/log_file_capteur.txt", ios::out | ios::app );
    mylog << dataSens_p <<"\n\n";
    mylog.close();

}
void Server::operator<<(int data){
    this->consoleWrite(data);
}
void Server::operator<<(std::string dataString){
    ofstream mylog;
    mylog.open("log/log_file_capteur.txt", ios::out | ios::app );
    mylog << dataString <<"\n\n";
    mylog.close();
}

ostream& operator << (ostream& sortie, const Server & n){
  //  n.fileWrite();
    //n.consoleWrite();
    cout<<"ancien version à ne pas utiliser"<<endl;
    return sortie;
}
//int main(int argc, char *argv[])
//{
//    Server serv1(10,5,6);
//    serv1.consoleWrite(10);
//    serv1.fileWrite(5);
//    Server serv2 = serv1;
//    cout<<serv2<<endl<<serv1<<endl;
//    return 0;
//}

