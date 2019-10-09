#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Server{
    private :
    int nbrOfSensors;
    bool consolActivation;
    bool logActivation;
    public:
        Server(); // Constructeur par défaut
        Server(int nbrOfSensors, bool consolActivation,bool logActivation); // Constructeur avec argument
        Server(const Server&); // Constructeur par recopie

        //Surcharge operator

        Server& operator = (const Server&);
        void operator << (int dataSens);
        friend void operator<<(string, int);
      

        ~Server(); // Destructeur

        void dataRcv(int dataSens);
        void consoleWrite(int dataSens_p); // attribut message a rajouter
        void fileWrite(int dataSens_p);  // attribut message a rajouter

};