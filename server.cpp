#include "server.h"

server::server() 
{
	//Constructeur
}

server::server(const server& other)
{
	//constructeur par recopie
}

server::~server()
{
	//destructeur
}

server& server::operator=(const server& other)
{

}

void server::operator<<(const server& other,float donnée)
{
	consoleWrite(d);
	fileWrite(d);
}

void consoleWrite (float d)
{
	cout << "Valeur de la donnée arrivante :" << d << " .";
}

void fileWrite (float d)
{	
	ofstream fluxLog1("home/users/bkieff01/Documents/LO43TP/TP1/TP1 SUITE/log1.txt");
	
	if (fluxLog1)
	{
		fluxLog1 << d << "," << endl;
	}
	else
	{	
		cout << "erreur : fichier introuvable" << endl;
	}
	return;
}
