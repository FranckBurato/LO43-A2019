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
		void fileWrite(string);
		void dataRcv(string);
		friend ostream& operator << (ostream&, const Server& s);
		friend void operator << (const string, const Server& s);
		Server& operator=(const Server&);
	private :
		string data;
};
