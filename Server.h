#include <iostream>

using namespace std;

class Server
{
	public :
		Server();
		Server (const Server&);
		~Server ();
		void helloWorld();
		friend ostream& operator << (ostream& ,const Server& s);
};
