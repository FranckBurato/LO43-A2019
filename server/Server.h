#include <iostream>
#include <string>

class Server{

	private : 
	public : 
		Server();    // constructeur par defaut
		Server(const Server &);    //Recopie 
		Server & operator=(const Server&);
		Server & operator << (const Server&);
		~ Server(); // Destructeur
		consoleWrite(string);
		fileWrite(string);
		
};
