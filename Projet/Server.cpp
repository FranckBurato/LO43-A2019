#include <iostream>
#include <string>

using namespace std;

//Constructeur

Server::Server()
{
  capteurTemp = 0;
  capteurHumi = 0;
  capteurLumi = 0;
  capteurSono =0;
}


//Constructeur de copie

Server::Server(Server const& autre):capteurTemp(autre.capteurTemp), capteurHumi(autre.capteurHumi), capteurLumi(autre.capteurLumi), capteurSono(autre.capteurSonno)
{
}


//Destructeur

Server::~Server()
{
  //Rien à mettre pour le moment
}
