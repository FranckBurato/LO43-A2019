#include "Server.h"
#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <cstdio>
#include <cstdlib>

using namespace std;

//Constructeur
Server::Server()
{
    this->nbrOfSensors = 4;
    this->logActivation = true;
    this->consolActivation = true;
}


//Si l'on veut que l'utilisateur puisse contrôler le programme
//Constructeur avec arguments
Server::Server(int nbrOfSensors, bool consolActivation, bool logActivation)
{
    this->nbrOfSensors = nbrOfSensors;
    this->consolActivation = consolActivation;
    this->logActivation = logActivation;
}


//Destructor
Server::~Server(){}


//Constructeur par recopie
Server::Server(const Server& other)
{
    this -> nbrOfSensors = other.nbrOfSensors;
    this->consolActivation = other.consolActivation;
    this->logActivation = other.logActivation;
}


//Surcharge de l'opérateur =
Server& Server::operator=(const Server& server_p)
{
    this->nbrOfSensors = server_p.nbrOfSensors;
    this->consolActivation = server_p.consolActivation;
    this->logActivation = server_p.logActivation;

    return *this;
}


//Fonction qui écrit dans la console
void Server::consoleWrite(string dataSens_p, string sensorName)
{
    switch(sensorName[0])       //en fonction du type de capteur, on modifie la syntaxe de ce qu'on écrit dans la console
        {
            case 'T' : cout << "Temperature : " << dataSens_p << " degrees" << endl << endl;
                break;

            case 'H' : cout << "Humidity : " << dataSens_p << " %" << endl << endl;
                break;

            case 'L' : cout << "Light : " << dataSens_p << endl << endl;
                break;

            case 'S' : cout << "Sound : " << dataSens_p << " dB" << endl << endl;
                break;
        }
}


//Fonction qui écrit dans un fichier
void Server::fileWrite (string sensorName, string dataSens_toString)
{
    string const name_temp("temperature.txt");
    string const name_humi("humidity.txt");
    string const name_li("light.txt");
    string const name_sou("sound.txt");

    switch (sensorName[0])
    {
    case 'T' : { //Fichier Temperature
                ofstream file_temp(name_temp.c_str(),ios::app);

                if(file_temp)       //on vérifie qu'on peut écrire dans le fichier
                {
                    file_temp << "Temperature : " << dataSens_toString << " degres" << endl;
                }
                else
                {
                    cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;
                }
              }
        break;

    case 'H' : { //Fichier Humidity
                ofstream file_humi(name_humi.c_str(),ios::app);

                if(file_humi)       //on vérifie qu'on peut écrire dans le fichier
                {
                    file_humi << "Humidity : " << dataSens_toString << " %" << endl;
                }
                else
                {
                    cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;
                }
              }
        break;

    case 'L': { //Fichier Light
                ofstream file_li(name_li.c_str(),ios::app);

                if(file_li)     //on vérifie qu'on peut écrire dans le fichier
                {
                    file_li << "Light : " << dataSens_toString << endl;
                }
                else
                {
                    cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;
                }
              }
        break;

    case 'S' : { //Fichier Sound
                ofstream file_sou(name_sou.c_str(),ios::app);

                if(file_sou)        //on vérifie qu'on peut écrire dans le fichier
                {
                    file_sou << "Sound : " << dataSens_toString << " dB" << endl;
                }
                else
                {
                    cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;
                }
              }
        break;

    default :       //si erreur dans le nom du capteur
                cout << "Error" << endl;
        break;
    }
}


//Fonction qui dirige dans quoi on écrit les valeurs des capteurs
void Server::dataRcv(string dataSens, std::string fileName, std::string sensorName)
{
    if (this->logActivation)          //on regarde si on veut écrire dans les fichiers
    {
        this->fileWrite(sensorName, dataSens);      //on écrit dataSens dans le fichier sensorName
    }

    if (this->consolActivation)      //on regarde si on veut écrire dans la console
    {
        this->consoleWrite(dataSens, sensorName);   //on écrit dataSens dans le fichier sensorName
    }
}

/*
//Surcharge de l'opérateur << (console)
ostream& Server::operator<<(int dataSens, ostream& out)
{
    out << "Data : " << dataSens << endl;
    return out;
}


//Surcharge de l'opérateur << (fichier)
ostream& Server::operator<<(ostream& out, string dataSens_toString)
{
    string const nomFichier("fichier.txt");
    ofstream monFlux(nomFichier.c_str());

    if(monFlux)
    {
        monFlux << dataSens_toString << endl;
        monFlux.close();
    }
    else
    {
        cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;
    }

    return out;
}
*/
