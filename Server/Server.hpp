#include <string>

class Server{
	private:
		std::string path;

	public:
		Server();
		Server(const Server&);
		~Server();
		Server& operator=(const Server&);
		void consoleWrite(std::string);
		void fileWrite(std::string);
		void setPath(std::string);
}
