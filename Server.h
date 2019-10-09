#ifndef DEF_SERVER
#define DEF_SERVER

#include <string>

class Server{
	private:
		int nbrOfSensors;
		bool consoleActivation;
		bool logActivation;	       
	public:
		Server();
		Server(int nbrOfSensors, bool consoleActivation, bool logActivation);
		Server(const Server& server);
		~Server();
		void operator=(const Server& server);
		void operator<<(int data);
		void operator<<(std::string dataToString);
		void dataReceive(int data);
		void consoleWrite(int data);
		void fileWrite(int data);
		int getNbrOfSensors();
		void setNbrOfSensors(int nbrOfSensors);
		bool getConsoleActivation();
		void setConsoleActivation(bool consoleActivation);
		bool getLogActivation();
		void setLogActivation(bool logActivation);
};

#endif
