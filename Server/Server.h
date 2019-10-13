#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Server{
    private:
        int nbrOfSensors;
        bool consolActivation;
        bool logActivation;

        void consoleWrite(string type_of_sensor, int);
        void fileWrite(string type_of_sensor, int); 

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

        void dataRcv(string type_of_sensor, int);

        

        
};