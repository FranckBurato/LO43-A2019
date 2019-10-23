#ifndef SERVER_H
#define SERVER_H
#include <iostream>

//ON UTILISE UN TEMPLATE DATA POUR FLOAT / INT / BOOL
template <class Data> class Server
{
private:
	int nbrOfSensors;
	bool consolActivation;
	bool logActivation;
	void fileWrite (const Data& dataSens_p, int nFile){};
	void consolWrite(const Data& dataSens_p){};
public:
	Server()
	{
		nbrOfSensors();
		consolActivation();
		logActivation();
	};
	Server(const Server& autre)
	{
		this->nbrOfSensors=autre.nbrOfSensors;
		this->consolActivation=autre.consolActivation;
		this->logActivation=autre.logActivation;
		return *this;
	};
	~Server(){};
	Server& operator=(const Server& autre);
	{
		this->nbrOfSensors=autre.nbrOfSensors;
		this->consolActivation=autre.consolActivation;
		this->logActivation=autre.logActivation;
		return *this;
	};
//<< AVEC POINTEUR SUR UN DATA ET UN NFILE POUR SAVOIR QUEL TYPE DE DATA
	void operator<<(const Data& dataSens_p, int nFile) 
	{
		fileWrite (const Data& dataSens_p, int nFile)
	};
//<< POUR AFFICHAGE SUR LA CONSOLE
	void operator<<(const Data& dataSens_p) 
	{
		consolWrite(const Data& dataSens_p);
	};
//METHODE POUR ECRIRE LA DATA RECUE DANS UN FICHIER
	void dataRcv(const Data dataSens, nFile)
	{
		std::cout << (*dataSens, nFile);
	};
};

#endif
