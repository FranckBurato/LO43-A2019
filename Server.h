#include <iostream>

using namespace std;

class Server
{
	public :
		Server();
		Server (const Server&);
		Server(string);
		~Server ();
		void consoleWrite();
		void fileWrite();
		friend ostream& operator << (ostream&, const Server& s);
		friend ofstream& operator<<(ofstream&, const Server& s);
		Server& operator=(const Server&);
	private :
		string filePath;
};
