#include "Server.h"
//Constructeur par défaut
Server::Server(){
    message = "";
}

//Constructeur avec argument
Server::Server(string message){
    this->message = message;
}

//Constructeur par recopie
Server::Server(const Server& server){
        this -> message= server.message;
}

Server& Server:: operator=(const Server& server){
    this->message = server.message;
    return *this;
}

Server& Server:: operator <<(const Server& server){
    consoleWrite(server.message);
    return *this;
}
/* Server& Server:: operator <<(const Server& server){
    fileWrite(Server.message);
    return *this;
}*/

//Destructeur
Server::~Server(){

}



void Server::consoleWrite(string message){
    cout << this->message;
};

void Server::fileWrite(string message){
    ofstream files;
    files.open("file.txt");
    files << message << endl;
    files.close();

};

void Server::setMessage(string messages){
     this->message = messages;
}

string Server::getMessage(){
     return this->message;
}

int main() 
{
    Server server("consoleWrite\n");
    server.consoleWrite(server.getMessage());
    server.setMessage("fileWrite");
    server.fileWrite(server.getMessage());
    return 0;
}