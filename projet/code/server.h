#ifndef MY_H_FILLE_
#define  MY_H_FILLE_
#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
#include "Sensor.h"
using namespace std;
class Server
{
private:
	int nbrOfSensors;
	bool consolActivation;
	bool logActivation;
public:
	//la forme canonique de coplien
	Server() :nbrOfSensors(0), consolActivation(true), logActivation(true) {};
	Server(Server& p);
	~Server();
	Server& operator=(Server &p);

	Server(int nbrOfSensors_p, bool consoleA, bool logA) :nbrOfSensors(nbrOfSensors_p), consolActivation(consoleA), logActivation(logA) {};
	friend ostream & operator<<(int d,ostream& os); //pour afficher la valeur du int 
	friend ostream& operator<<(string s ,ostream& os);// pour afficher la valeur du string
	void consoleWrite(string dataSens_p);//visualiser les donnée

	void fileWrite(string dataSens_p,int i);//stocker les données des capteurs(chaque capteur disposer de son ficher

	void dataRcv(string dataSens,int i);//consoleWrite+fileWrite
};
#endif
