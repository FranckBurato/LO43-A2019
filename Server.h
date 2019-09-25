#ifndef DEF_SERVER
#define DEF_SERVER

#include <string>

class Server{
	private:

	public:
		Server();
		Server(const Server&);
		~Server();
		Server &operator=(const Server&);
		string &operator<<(const Server&);
		string &operator<<(const Server&,std::string logName);
		void consoleWrite(std::string text);
		void fileWrite(std::string text);
};

#endif
