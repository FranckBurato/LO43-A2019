class Server
{
private:
	int nbrOfSensors;
	bool consolActivation;
	bool logActivation;
	template <class Data>
	void fileWrite (const Data& dataSens_p, int nFile){};
	template <class Data>
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
	template <class Data>
	void operator<<(const Data& dataSens_p, int nFile) 
	{
		fileWrite (const Data& dataSens_p, int nFile)
	};
	template <class Data>
	void operator<<(const Data& dataSens_p) 
	{
		consolWrite(const Data& dataSens_p);
	};
	template <class Data>
	void dataRcv(const Data dataSens)
	{
		
	};
}
