#include "server.h"
#include <fstream>
#include <iostream>

using namespace std;

Server::Server(int capteur1,int capteur2,in capteur3)
{
this->capteur1=capteur1;
this->capteur2=capteur2;
this->capteur3=capteur3;
}
Server::Server(const Server & serv){
    this->capteur1=serv.capteur1;
    this->capteur2=serv.capteur2;
    this->capteur3=serv.capteur3;
}
Server& Server::operator=(const Server& serv){
    this->capteur1=serv.capteur1;
    this->capteur2=serv.capteur2;
    this->capteur3=serv.capteur3;
    return *this;
}
Server::~Server(){
    delete this->capteur1;
    delete this->capteur2;
    delete this->capteur3;
}
void Server::consoleWrite(){
    cout<<"capteur 1: "<<this->capteur1<<endl<<"capteur 2: "<<this->capteur2<<endl<<"capteur 3: "<<this->capteur3<<endl;
}
void Server::fileWrite(){
    std::ofstream log_file("log_file_capteur1.txt", std::ios_base::out | std::ios_base::app );
        log_file << this->capteur1 << std::end;
    std::ofstream log_file("log_file_capteur2.txt", std::ios_base::out | std::ios_base::app );
        log_file << this->capteur2 << std::end;
    std::ofstream log_file("log_file_capteur3.txt", std::ios_base::out | std::ios_base::app );
        log_file << this->capteur3 << std::end;
}

int main(int argc, char *argv[])
{
    Server serv1(10,5,6);
    serv1.consoleWrite();
    serv1.fileWrite();
    return 0;
}

