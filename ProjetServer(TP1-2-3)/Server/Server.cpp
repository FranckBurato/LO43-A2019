#include "Server.h"
#include <string>

using namespace std;

Server::Server()  //Constructeur par défaut
{}
Server::Server(const Server& server)  //Constructeur de recopie
{}
Server::Server(int nbrOfSensors_m, bool consolActivation_m, bool logActivation_m) //Constructeur Surchargé
{}
Server::~Server()  //Destrcuteur
{}

Server& Server::operator=(const Server& server)  
{}
void Server::operator<<(int dataSens)  //operateur de sortie, console
{}
void Server::operator<<(string dataSens_toString) //operateur de sortie, fichier
{}

void fileWrite(int dataSens)   //Ecrit les données ds un fichier
{}
void consolWrite(int dataSens)   //Visualise les données dans la console
{}
