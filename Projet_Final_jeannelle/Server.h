#ifndef SERVER_H_INCLUDED
#define SERVER_H_INCLUDED
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

class Server
{
private:
        int nbrOfSensors; // nombre de capteurs
        bool consoleActivation; // Verifie si on peut ecrire dans la console (true par default)
        bool logActivation; // Verifie si on peut ecrire dans les fichiers log (true par default)

public:     //Forme canonique de Coplien
		Server(); //Constructeur par défault
		Server(const Server& server_p); //Constructeur par recopie
		Server(int nbrOfSensor_p, bool consolActivation,bool logActivation); //Constructeur par recopie
		~Server (); //destructeur
		Server &operator=(const Server&server_p); //surcharge opérateur

        void dataRvc(string dataSens,int dataSens_p); //Ecrira dans les fichiers des capteurs et sur la console si logActivation et consoleActivation sont vérifié.
		void consolewrite(string dataSens);//Affiche les données du capteur dans la console
		void filewrite(string dataSens,int dataSens_p);//Ecrit les données du capteur dans un fichier texte qui lui est associé


};

Server& operator<<(Server s,string dataSens);
Server& operator<<(string dataSens,int dataSens_p);

#endif // SERVER_H_INCLUDED
