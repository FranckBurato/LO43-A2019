#ifndef SERVER_H
#define SERVER_H
#include <iostream>

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
	void operator<<(const Data& dataSens_p, int nFile) 
	{
		fileWrite (const Data& dataSens_p, int nFile)
	};
	void operator<<(const Data& dataSens_p) 
	{
		consolWrite(const Data& dataSens_p);
	};
	void dataRcv(const Data dataSens, nFile)
	{
		std::cout << (*dataSens, nFile);
	};
};

#endif
