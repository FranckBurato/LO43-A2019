#include "server.h"

server::server():nbrOfSensors(0),consolActivation(0),logActivation(0){}

server::server(const server& other)
{
	nbrOfSensors=other.nbrOfSensors;
	consolActivation=other.consolActivation;
	logActivation=other.logActivation;
}

server::server(int a, bool b, bool c)
{
	nbrOfSensors=a;
	consolActivation=b;
	logActivation=c;
}

server::~server(){}

server& server::operator=(const server& other)
{
    nbrOfSensors=other.nbrOfSensors;
	consolActivation=other.consolActivation;
	logActivation=other.logActivation;
	return *this;
}

void operator<<(string dataSensorToString, int sensorLog)
{
    switch (sensorLog)
        {

        case 1:
        {
            ofstream fluxLogHumidity("logHumidity.txt");
            if (fluxLogHumidity)
            {
                fluxLogHumidity << dataSensorToString <<endl ;
                fluxLogHumidity.close();

            }
            else
            {
                cout << "erreur : fichier log humidity introuvable" << endl<< endl ;
            }
        break;
        }

        case 2:
        {
            ofstream fluxLogTemperature("logTemperature.txt");
            if (fluxLogTemperature)
            {
                fluxLogTemperature << dataSensorToString << endl ;
                fluxLogTemperature.close();
            }
            else
            {
                cout << "erreur : fichier log temperature introuvable" << endl<< endl ;
            }
        break;
        }

        case 3:
        {
            ofstream fluxLogLight("logLight.txt");
            if (fluxLogLight)
            {
                fluxLogLight << dataSensorToString << endl ;
                fluxLogLight.close();
            }
            else
            {
                cout << "erreur : fichier log 3 introuvable" << endl<< endl ;
            }
        break;
        }
        case 4:
        {
            ofstream fluxLogSound("logSound.txt");
            if (fluxLogSound)
            {
                fluxLogSound << dataSensorToString << "," << endl;
                fluxLogSound.close();
            }
            else
            {
                cout << "erreur : fichier log 4 introuvable" << endl << endl ;
            }
        break;
        }
    }
	return;
}

void server::operator<<(int dataSensor)
{
    cout << "Valeur de la donnee arrivante :   " << dataSensor  ;
	return;
}



void server::consoleWrite (int dataSensor, server serv)
{
   serv << dataSensor;
   return;
}

void server::fileWrite (string dataSensorToString, int sensorLog)
{
    dataSensorToString << sensorLog ;
    return;
}

