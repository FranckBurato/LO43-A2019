#ifndef SERVER_INCLUDED
#define SERVER_INCLUDED

#include <iostream>

class Server
{
	public:
	//Methodes
	void consoleWrite(Server objet);
	void fileWright(Server objet);

	Server();     //Constructeur
	Server(Server const& autre);   //Constructeur par recopie
	~Server();     //Destructeur
	Server&operator=(const Server& autre);    //Operateur d'affectation

	private:
	//Attributs
	double capteurTemp;
	double capteurHumi;
	double capteurLumi;
	double capteurSono;

}
