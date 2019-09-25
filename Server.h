#include <iostream>

using namespace std;

class Server
{
	public :
		Server();
		void helloWorld();
		ostream& operator << (ostream&);
};
