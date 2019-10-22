#pragma once
#ifndef SERVER_H
#define SERVER_H
#include <string>
#include <fstream>
#include "Sensor.h"
#include <iostream>
using namespace std;
class Server {
private:
	int nbOfSensors;
	bool consolActivation;
	bool logActivation;
public:
	Server();
	Server(const Server& server_p);
	Server(int nbOfSensors_p, bool consolActivation, bool logActivation);
	~Server() {};
    Server& operator=(const Server& server_p);

	string nowtime();

	template <class T, class string>void dataRcv(const Sensor<T, string> s);

	template <class T,class string>void fileWrite(Sensor<T,string>s);

	template <class T,class string>void consolWrite(Sensor<T,string>s);


};

template<class T, class string>
inline void Server::fileWrite(Sensor<T,string> s)
{
	ofstream fout;
	string filename = s.sendname() + " data.txt";
	fout.open(filename, ios::app);
	fout << nowtime() << endl;
	fout << s.sendname() << "	:" << s.sendval() << endl;
	fout.close();
}

template<class T, class string>
inline void Server::consolWrite(Sensor<T,string> s)
{
	cout << nowtime() << endl;
	cout << s.sendname() << "	:" << s.sendval() << endl;
}

template<class T, class string>
inline void Server::dataRcv(const Sensor<T,string> s)
{
	if (this->consolActivation == true) {
		this->consolWrite(s);
	}
	else {
		cout << "Remarque: les donnees du capteur sont stockees dans le fichier de logs mais ne sont pas affichees. " << endl;
	}
	if (this->logActivation == true) {
		this->fileWrite(s);
	}
	else {
		cout << "Remarque: les donnees sont affichees mais non stockees dans le fichier de logs." << endl;
	}

}
#endif 