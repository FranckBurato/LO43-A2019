#include <string>
#include <iostream>

class Server{
	private:
		std::string data;
	public:
		Server();
		Server(std::string str);
		Server(const Server& server);
		~Server();
		Server& operator=(const Server& server);
		friend std::ostream& operator<<(std::ostream& os, const Server& server);
		void consoleWrite();
		void fileWrite(const std::string &name);
};
