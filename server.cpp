#include "Server.h"
#include <fstream>

Server::Server()
{
    //ctor
}

Server::~Server()
{
    //dtor
}

Server::Server(int capteur1, int capteur2){

    cap1 = capteur1;
    cap2 = capteur2;

}

void Server::consoleWrite()
{
    cout <<"Capteur1 :" <<cap1 <<endl;
    cout <<"capteur2 :" <<cap2 <<endl;
}

void Server::fileWrite(Server capteur){
    std::ofstream resultats("CapteurResultat.txt");
    if(resultats){
        resultats <<"capteur1 :" <<capteur.cap1;
        resultats <<"capteur2 :" <<capteur.cap2;
    }
    else{
        cout <<"L'ecriture dans le fichier incorrecte'" <<endl;
    }

}

//NOUVEAU CODE
void Server::operator=(const Server& s) {

    cap1 = s.cap1;
    cap2 = s.cap2;

}

 std::ostream & operator<<(std::ostream& out, const Server& s){

    out <<"Capteur1 :" <<s.cap1 <<endl;
    out <<"capteur2 :" <<s.cap2 <<endl;
}






