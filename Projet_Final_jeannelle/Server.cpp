#include "server.h"
#include <fstream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <ctime>

using namespace std;

//Constructeur par défault
Server::Server(): nbrOfSensors(4), consoleActivation(true), logActivation(true){}

//Constructeur par recopie
Server::Server(const Server& server_p)
{
    nbrOfSensors=server_p.nbrOfSensors;
    consoleActivation=server_p.consoleActivation;
    logActivation=server_p.logActivation;
}
//Constructeur avec arguments
Server::Server(int nbrOfSensor_p, bool consolActivation,bool logActivation) : nbrOfSensors(nbrOfSensor_p), consoleActivation(consolActivation), logActivation(logActivation){}


Server::~Server (){}

Server& Server::operator=(const Server &server_p) //Surcharge opérateur égale.
{
    nbrOfSensors=server_p.nbrOfSensors;
    consoleActivation=server_p.consoleActivation;
    logActivation=server_p.logActivation;
    return *this;
}

void Server::consolewrite(string dataSens)//Ecrit la donnée reçu sur la console
{
    cout<<dataSens<<endl;
}

void Server::filewrite(string dataSens, int dataSens_p) // methode qui en fonction du type de capteur écrira dans son fichier log associé la valeur du capteur
{
    switch (dataSens_p)
    {
    case 1:
    {
        string const fichier1("log_humidity.txt");
        ofstream flux1(fichier1.c_str(), ios::app);
        if(flux1)
        {
                flux1 << dataSens << endl; //Ecrit la valeur à la fin du fichier texte.
                flux1.close(); //ferme le fichier
        }
        else
        {
                cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;
        }


        break;
    }

    case 2:
    {
        string const fichier2("log_Sound.txt");
        ofstream flux2(fichier2.c_str(), ios::app);
        if(flux2)
        {
            flux2 << dataSens << endl;
            flux2.close();
        }
        else
        {
            cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;
        }

        break;
    }
    case 3:
    {
        string const fichier3("log_light.txt");
        ofstream flux3(fichier3.c_str(), ios::app);
        if(flux3)
        {
            flux3 <<dataSens << endl;
            flux3.close();
        }
        else
        {
            cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;
        }

        break;
    }
    case 4:
    {
        string const fichier4("log_Temperature.txt");
        ofstream flux4(fichier4.c_str(), ios::app);
        if(flux4)
        {
            flux4 <<dataSens << endl;
            flux4.close();
        }
        else
        {
                    cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;
        }

        break;
    }
    default:
        break;
    }
}

void Server::dataRvc(string dataSens,int dataSens_p) //Reçoit les données du capteur puis les affiche dans un fichier si logActivation est true et sur la console si la consoleActivation est activée
{
    if(consoleActivation){
        consolewrite(dataSens);
    }
    if(logActivation)
    {
        filewrite(dataSens,dataSens_p);
    }
}

/*std::ostream& Server::operator<<(Server s, string dataSens)
{
    consolewrite(dataSens);
}

Server& Server::operator<<(string dataSens, int dataSens_p)
{
   fileWrite(dataSens, dataSens_p);
}
*/


