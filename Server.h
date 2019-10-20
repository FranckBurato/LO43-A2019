#ifndef SERVER_H_INCLUDED
#define SERVER_H_INCLUDED

#include<ostream>
#include<fstream>
#include<string>

using namespace std;

/*Déclaration de ma class Server et la class Template permettra de générer des données de types différents: Integer, Float et Boolean*/

template<class T> class Server

{

private:
    int nbrOfSensors;

    bool consolActivation;

    bool logActivation;

    void fileWrite(T *dataSens_p)
    {
        ofstream ecrire; /*permet d'ecrire dans un fichier de type .txt les valeurs des différents types de capteurs reçues par le "Serveur"*/

        if(dataSens_p->typeCapteur == "Humidity") /*si le type_capteur est Humidity*/

            {
                ecrire.open("resources/Humidity.txt",ios::app); /*Crée un fichier Humidity dans le dossier resources*/
            }

        else
            {
                if(dataSens_p->typeCapteur == "Sound")
                {
                    ecrire.open("resources/Sound.txt",ios::app);
                }
            else
            {
                if(dataSens_p->typeCapteur == "Light" )
                {
                    ecrire.open("resources/Light.txt",ios::app);
                }

                else
                {
                    ecrire.open("resources/Temperature.txt",ios::app);
                }
            }
        }

       if(ecrire) /* Après avoir créer les fichier log, stocke les données de chaque capteur dans le fichier correspondant */
        {
            ecrire<<dataSens_p->sendData()<<endl;
        }
        else//Sinon on signale une erreur et on quitte le programme.
        {
            cout<<endl <<"PROBLEME OUVERTURE DU FICHIER"<<endl;
        }
    }

    void consoleWrite(T *dataSens_p) /*Permet d'afficher sur la console le type de "capteur" et la "donnée" de ce capteur */
    {

        cout << "Nom du capteur: " << dataSens_p->typeCapteur << "\n" << "Donnee: "<< dataSens_p->sendData() << "\n"<<"Envoie reussie avec succes\n"<< endl;
    }

public:
        /*Déclaration des méthodes sous la forme canonique de Coplien*/

    Server():nbrOfSensors(),consolActivation(true),logActivation(true){} /*Initialisation du constructeur par défaut*/

    Server(const Server &server_p) /*Initialisation du constructeur par recopie*/
    {
        this->nbrOfSensors=server_p.nbrOfSensors;
        this->consolActivation=server_p.consolActivation;
        this->logActivation=server_p.logActivation;
    }

    Server(int nbrOfSensors_p, bool consolActivation_p, bool logActivation_p) /*Surcharge du constructeur par défaut*/
    {
        this->nbrOfSensors=nbrOfSensors_p;
        this->consolActivation=consolActivation_p;
        this->logActivation=logActivation_p;
    }

    ~Server(){} /*Initialisation du destructeur*/


    Server &operator=(const Server &server_p) /*Initialisation de l'opérateur d'affectation '='*/
    {
        this->nbrOfSensors =server_p.nbrOfSensors;
        this->consolActivation=server_p.consolActivation;
        this->logActivation=server_p.logActivation;
        return *this;
    }

    void dataRcv(T *dataSens) /*Reçoit les données reçues dans le Server*/
    {
        consoleWrite(dataSens);
        fileWrite(dataSens);
    }
};

#endif // SERVER_H_INCLUDED
