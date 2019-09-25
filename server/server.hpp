#include <string>

using namespace std;
class Server{
	private:
		string data;
	public:
		Server();
		Server(string);
		Server(const Server&);
		~Server();
		const Server& operator=(const Server&);
		ostream& operator<<(ostream&, const Server&);
		void consoleWrite(string);
		void fileWrite(string);
}
