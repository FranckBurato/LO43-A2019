#ifndef _server_
#define _server_

#include <iostream>
#include <string>
#include <cstring>
#include <unistd.h>



using namespace std;

class Server{

	private : string data;
	public :
		string getData();
		void setData(string donnees);
		Server();    // constructeur par defaut
		Server(const Server &);    //Recopie
		Server & operator=(const Server&);
		friend ostream & operator << (ostream&,const Server&);
		Server(string data);
		~Server(); // Destructeur
		void consoleWrite(const Server& display);
		void fileWrite(string F);
		void SetData(string s);
};

#endif





