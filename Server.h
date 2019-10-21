class Server
{
private:
	int nbrOfSensors;
	bool consolActivation;
	bool logActivation;
	void fileWrite (const int& dataSens_p, int nFile){};
	void consolWrite(const int& dataSens_p){};
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
	void operator<<(const int& dataSens_p, int nFile) 
	{
		fileWrite (const int& dataSens_p, int nFile)
	};
	void operator<<(const int& dataSens_p) 
	{
		consolWrite(const int& dataSens_p);
	};
	void dataRcv(const int dataSens)
	{
		
	};
}
