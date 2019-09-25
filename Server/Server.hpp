#include <string>

class Server{
	private:
		std::string path;

	public:
		Server();
		Server(std::string);
		Server(const Server&);
		~Server();
		const Server& operator=(const Server&);
		void consoleWrite(std::string);
		void fileWrite(std::string);
};
