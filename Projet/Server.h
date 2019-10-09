#ifndef SERVER_INCLUDED
#define SERVER_INCLUDED
#include <iostream>
#include <string>
#include <fstream>

class Server
{
	public:
	//Methodes
	void consoleWrite(double, double, double, double);
	void fileWright();

	Server();    				  //Constructeur
	Server(Server const&);  	          //Constructeur de recopie
	virtual ~Server();     		          //Destructeur
	Server&operator=(const Server&);          //Operateurs d'affectation
	Server&operator<<(Server&)

	private:
	//Attributs
	double capteurTemp;
	double capteurHumi;
	double capteurLumi;
	double capteurSono;

}

#endif // SERVER_INCLUDED
