include "server.h"

server::server():nbrOfSensors(0),consolActivation(0),logActivation(0)
{

}

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

server::~server()
{
	//destructeur
}

server& server::operator=(const server& other)
{
    nbrOfSensors=other.nbrOfSensors;
	consolActivation=other.consolActivation;
	logActivation=other.logActivation;
	return *this;
}

/*void operator<<(string dataSensorToString, int sensorLog)
{
    fileWrite(dataSensorToString,sensorLog);
    return;
}*/

void server::operator<<(int dataSensor)
{
    consoleWrite(dataSensor);
    return;
}



void consoleWrite (int dataSensor)
{
	cout << "Valeur de la donnée arrivante :" << dataSensor << " .";
	return;
}

void fileWrite (string dataSensorToString, int sensorLog)
{
    switch (sensorLog)
        {

        case 1:
        {
            ofstream fluxLog1("home/users/bkieff01/Documents/LO43TP/TP1/TP1 SUITE/log1.txt");
            if (fluxLog1)
            {
                fluxLog1 << dataSensorToString << "," << endl;
            }
            else
            {
                cout << "erreur : fichier log 1 introuvable" << endl;
            }
        break;
        }

        case 2:
        {
            ofstream fluxLog2("home/users/bkieff01/Documents/LO43TP/TP1/TP1 SUITE/log2.txt");
            if (fluxLog2)
            {
                fluxLog2 << dataSensorToString << "," << endl;
            }
            else
            {
                cout << "erreur : fichier log 2 introuvable" << endl;
            }
        break;
        }

        case 3:
        {
            ofstream fluxLog3("home/users/bkieff01/Documents/LO43TP/TP1/TP1 SUITE/log3.txt");
            if (fluxLog3)
            {
                fluxLog3 << dataSensorToString << "," << endl;
            }
            else
            {
                cout << "erreur : fichier log 3 introuvable" << endl;
            }
        break;
        }
        case 4:
        {
            ofstream fluxLog4("home/users/bkieff01/Documents/LO43TP/TP1/TP1 SUITE/log4.txt");
            if (fluxLog4)
            {
                fluxLog4 << dataSensorToString << "," << endl;
            }
            else
            {
                cout << "erreur : fichier log 4 introuvable" << endl;
            }
        break;
        }
    }
	return;
}


