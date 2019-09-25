#include <iostream>
#include <fstream>
include namespace std;

Class Server(){
	private:
		int a;
	public:
		Server();
		Server(const Server& s);
		virtual ~Server();
		Server &operator=(const Server& s);
		Server &operator>>(const Server& s);
	
		void consoleWrite(int);
		void fileWrite(int);
};