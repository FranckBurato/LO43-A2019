#include <string>

class Server{
	private:
		std::string path;

	public:
		Server();
		Server(std::string&);
		Server(const Server&);
		~Server();
		Server& operator=(const Server&);
		void consoleWrite(const std::string&);
		void fileWrite(const std::string&);
};

std::istream& operator>>(std::istream&, Server&);
