#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Server{
    private:
        string message;

    public:
        /*** FORME CANONIQUE DE COPLIEN ***/
        //constructeur par défaut
        Server();
        Server(string message);
        //constructeur de recopie
        Server(const Server& server);
        //destructeur
        ~Server();
        //Operateur d'affectation
        Server& operator=(const Server& server);


        void consoleWrite(string message);
        void fileWrite(string message);  

        //output
        friend ostream& operator<<(ostream& os, const Server& v);      
};