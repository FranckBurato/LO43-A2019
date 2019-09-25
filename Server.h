#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Server{
    private :
    string message;
    public:
        Server(); // Constructeur par défaut
        Server(string message); // Constructeur avec argument
        Server(const Server&); // Constructeur par recopie

        //Surcharge operator

        Server& operator = (const Server&);
        Server& operator << (const Server&);

        ~Server(); // Destructeur

        void consoleWrite(string message); // attribut message a rajouter
        void fileWrite(string message);  // attribut message a rajouter
        void setMessage(string message);
        string getMessage();
};