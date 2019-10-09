class Server
{
private:
	int nbrOfSensors;
	bool consolActivation;
	bool logActivation;
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
	Server& operator=(const Server&);
	{
		this->nbrOfSensors=autre.nbrOfSensors;
		this->consolActivation=autre.consolActivation;
		this->logActivation=autre.logActivation;
		return *this;
	};
//	std::ostream& operator << (std::ostream& os, <type de ton choix> <const & ?> bidule) 
//	{
// 		 return os;
//	};
//	std::ostream& operator << (std::ostream& os, <type de ton choix> <const & ?> bidule) 
//	{
// 		 return os;
//	};
}
