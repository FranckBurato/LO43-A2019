#include "Server.h"


//Constructeur par defaut
Server::Server(){
    this->message = "";
}
Server::Server(string message){
    this->message = message;
}
//contructeur de recopie
Server::Server(const Server& server){
    this->message = server.message;
}
//destructeur
Server::~Server(){
    
}
//Operateur d'affectation
Server& Server:: operator=(const Server& server){
    if(this != &server){
        this->message = server.message;
    }
    return *this;
}

void Server::consoleWrite(string message){
    cout << message << "\n";
}
void Server::fileWrite(string message){
    ofstream myfile;
    myfile.open ("log.txt");
    myfile << message << "\n";
    myfile.close();
}


ostream& operator<<(ostream& os, const Server& v){
    os << "Affichage et Archivage du server \n" ;
    //consoleWrite("message");
    //filewrite("message");

    return os;
}


int main(){
    Server s1;
    //cout << s1;
    s1.fileWrite("Salut");
}