#include "server.h"
Server::Server(Server& p) { this->nbrOfSensors = p.nbrOfSensors; this->consolActivation = p.consolActivation; this->logActivation = p.logActivation; };
Server::~Server() {};
Server& Server::operator=(Server& p)
{
	this->nbrOfSensors = p.nbrOfSensors;
	this->consolActivation = p.consolActivation;
	this->logActivation = p.logActivation;
	return *this;
}; 
	void Server::consoleWrite(string dataSens_p)//visualiser les donn¨¦e
	{
		if (this->consolActivation == true)
			cout << dataSens_p << endl;
		else
			cout << "consoleWrite is failed!";
	};
	void Server::fileWrite(string dataSens_p,int i)//stocker les donn¨¦es des capteurs(chaque capteur disposer de son ficher
	{
		string name;
		switch (i) {
		case 1:name = "temperature"; break;
		case 2:name = "humidity"; break;
		case 3:name = "sound"; break;
		case 4:name = "light"; break;
		default:break;
		}
		ofstream file(name + ".text", ios::app);
		if (file.is_open()) {
			file << dataSens_p << "\n";
			file.close();
		}
		else
			cout << "fileWrite is failed!";
	}
	void Server::dataRcv(string dataSens,int i)
	{
		string m = dataSens;
		this->consoleWrite(m);
		this->fileWrite(m,i);
	};

	ostream& operator<<(int d, ostream& os)
	{
		os << d;
		return os;
	}
	ostream& operator<<(string s, ostream& os)
	{
		os << s;
		return os;
	}
	
	