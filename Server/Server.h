#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Server{
    private:
        int nbrOfSensors;
        bool consolActivation;
        bool logActivation;

        void consoleWrite(int);
        void fileWrite(int); 

    public:
        /*** FORME CANONIQUE DE COPLIEN ***/
        //constructeur par défaut
        Server();
        Server(int, bool, bool);
        //constructeur de recopie
        Server(const Server& server);
        //destructeur
        ~Server();
        //Operateur d'affectation
        Server& operator=(const Server& server);

        void operator<<(int);
        friend void operator<<(string, int);

        void dataRcv(int);

        

        
};