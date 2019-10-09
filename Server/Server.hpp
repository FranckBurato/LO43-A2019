#include <string>
#include "Scheduler.h"

class Server{
	private:
		bool consolActivation;
		bool logActivation;
		std::string currentLog;

	public:
		Server();
		Server(const Server&);
		~Server();
		Server& operator=(const Server&);
		void consoleWrite(const std::string&);
		void fileWrite(const std::string&);
		void setCurrentLog(const std::string&);

    friend std::istream& operator>>(std::istream&, Server&);
    friend void Scheduler::run();
};

std::istream& operator>>(std::istream&, Server&);
