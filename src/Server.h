#ifndef DEF_SERVER
#define DEF_SERVER

#include <string>
#include "Data.h"

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
		Server& operator=(const Server& server);
		void operator<<(Data data);
		void operator<<(Data data);
		void dataReceive(Data data);
		void consoleWrite(Data data);
		void fileWrite(Data data);
		int getNbrOfSensors();
		void setNbrOfSensors(int nbrOfSensors);
		bool getConsoleActivation();
		void setConsoleActivation(bool consoleActivation);
		bool getLogActivation();
		void setLogActivation(bool logActivation);
};

#endif
