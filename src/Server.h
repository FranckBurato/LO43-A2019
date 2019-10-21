#ifndef DEF_SERVER
#define DEF_SERVER

#include <string>
#include <fstream>

class Server{
	private:
		int nbrOfSensors;
		bool consoleActivation;
		bool logActivation;	       
	public:
		Server();
		Server(int nbrOfSensors, bool consoleActivation, bool logActivation);
		Server(const Server &server);
		~Server();
		Server& operator=(const Server &server);
		void dataReceive(std::string data, std::string sensorName);
		void consoleWrite(std::string data);
		void fileWrite(std::string sensorName, std::string const data);
		int getNbrOfSensors() const;
		void setNbrOfSensors(int nbrOfSensors);
		bool getConsoleActivation() const;
		void setConsoleActivation(bool consoleActivation);
		bool getLogActivation() const;
		void setLogActivation(bool logActivation);
};

std::ostream& operator<<(std::ostream &out, std::string const data);
std::ofstream& operator<<(std::ofstream &log, std::string const data);

#endif
