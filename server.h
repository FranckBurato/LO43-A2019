#ifndef SERVER_H
#define SERVER_H
#include <iostream>
#include <fstream>

using namespace std;

class server
{
    private :

        int nbrOfSensors;
        bool consolActivation;
        bool logActivation;

	public :

		server ();
		server (const server& other);
		server (int,bool,bool);
		virtual ~server();
		server& operator=(const server& other);
		//surchage doit permettre de copier le contenu d'un objet dans l'objet courant

		void operator<<(int dataSensor);
		//surcharge doit : element que l'on souhaite afficher doit etre redirigé vers la console

        	friend void operator<<(string dataSensorToString, int sensorLog);
        //Surcharge doit ecrire la donnée du capteur qui a préalablement été transformée d'int en string, il doit l'écrire dans le bon log correspondant au bon sensor
        //friend pour pouvoir l'utiliser malgré qu'on l'appelle avec 2 arguments

		void consoleWrite (int dataSensor);
		void fileWrite (string dataSensorToString, int sensorLog);
		void dataRcv (int dataSensor);

};

#endif // SERVER_H

