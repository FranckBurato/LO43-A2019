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
    switch(sensorName[0])
        {
            case 'T' : cout << "Temperature : " << dataSens_p << endl;
                break;

            case 'H' : cout << "Humidity : " << dataSens_p << endl;
                break;

            case 'L' : cout << "Light : " << dataSens_p << endl;
                break;

            case 'S' : cout << "Sound : " << dataSens_p << endl;
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
    case 'T' : {
                ofstream file_temp(name_temp.c_str(),ios::app);

                if(file_temp)
                {
                    file_temp << "Temperature : " << dataSens_toString << " degres" << endl;
                }
                else
                {
                    cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;
                }
              }
        break;

    case 'H' : {
                ofstream file_humi(name_humi.c_str(),ios::app);

                if(file_humi)
                {
                    file_humi << "Humidity : " << dataSens_toString << " %" << endl;    //trouver comment mettre la variable à l'intérieur de la fonction
                }
                else
                {
                    cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;
                }
              }
        break;

    case 'L': {
                ofstream file_li(name_li.c_str(),ios::app);

                if(file_li)
                {
                    file_li << "Light : " << dataSens_toString << " lux" << endl;    //trouver comment mettre la variable à l'intérieur de la fonction
                }
                else
                {
                    cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;
                }
              }
        break;

    case 'S' : {
                ofstream file_sou(name_sou.c_str(),ios::app);

                if(file_sou)
                {
                    file_sou << "Sound : " << dataSens_toString << " dB" << endl;    //trouver comment mettre la variable à l'intérieur de la fonction
                }
                else
                {
                    cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;
                }
              }
        break;

    default :
                cout << "Error" << endl;
        break;
    }
}


//Fonction qui dirige dans quoi on écrit les valeurs des capteurs
void Server::dataRcv(string dataSens, std::string fileName, std::string sensorName)
{
    if (this->logActivation)          //on regarde si on veut écrire dans les fichiers
    {
        this->fileWrite(sensorName, dataSens);
    }

    if (this->consolActivation)      //on regarde si on veut écrire dans la console
    {
        this->consoleWrite(dataSens, sensorName);
    }
}


//Surcharge de l'opérateur << (console)
/*
void Server::operator<<(string dataSens)
{
    cout << dataSens << endl;
}


//Surcharge de l'opérateur << (fichier)
void Server::operator<<(int numFile, string dataSens_toString)
{
    switch (numFile)
    {
    case 1 : {
                string const name_temp("temperature.txt");
                ofstream file_temp(name_temp.c_str(),ios::app);

                if(file_temp)
                {
                    file_temp << "Temperature : " << dataSens_toString << "degres" << endl;
                }
                else
                {
                    cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;
                }
              }
        break;

    case 2 : {
                string const name_humi("humidity.txt");
                ofstream file_humi(name_humi.c_str(),ios::app);

                if(file_humi)
                {
                    file_humi << "Humidity : " << dataSens_toString << "%" << endl;    //trouver comment mettre la variable à l'intérieur de la fonction
                }
                else
                {
                    cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;
                }
              }
        break;

    case 3 : {
                string const name_li("light.txt");
                ofstream file_li(name_li.c_str(),ios::app);

                if(file_li)
                {
                    file_li << "Light : " << dataSens_toString << "lux" << endl;    //trouver comment mettre la variable à l'intérieur de la fonction
                }
                else
                {
                    cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;
                }
              }
        break;

    case 4 : {
                string const name_sou("sound.txt");
                ofstream file_sou(name_sou.c_str(),ios::app);

                if(file_sou)
                {
                    file_sou << "Sound : " << dataSens_toString << "dB" << endl;    //trouver comment mettre la variable à l'intérieur de la fonction
                }
                else
                {
                    cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;
                }
              }
        break;

    default :
                cout << "Error" << endl;
        break;
    }
}

*/
