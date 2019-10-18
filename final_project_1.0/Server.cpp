#include <iostream>
#include "scheduler.h"
#include "Sensor.h"
#include "Server.h"
#include <fstream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <ctime>

using namespace std;

Server::Server():nbrOfSensors(4), consoleActivation(true), logActivation(true)
{}

Server::Server(Server &server_p)
{
    nbrOfSensors=server_p.nbrOfSensors;
    consoleActivation=server_p.consoleActivation;
    logActivation=server_p.logActivation;
}

Server::Server(int nbrOfSensors, bool consoleActivation, bool logActivation) : nbrOfSensors(nbrOfSensors), consoleActivation(consoleActivation), logActivation(logActivation)
{}

Server::~Server()
{}

Server& Server::operator=(Server &server_p)
{
    nbrOfSensors=server_p.nbrOfSensors;
    consoleActivation=server_p.consoleActivation;
    logActivation=server_p.logActivation;
    return *this;
}

ostream& Server::operator<<(string dataSens)
{
    cout << dataSens;
}

ostream &operator<<(string dataSens, int dataType)
{
    switch (dataType) //la declaration de variables necessite les "{}" pour chaque case
    {
    case 0:{
        string const fichier0("log_temp.txt");
        ofstream flux0(fichier0.c_str(), ios::app);
        if(flux0)
        {
            flux0 << "temperature : " << dataSens << endl;
            flux0.close();
        }
        break;}
    case 1:{
        string const fichier1("log_humi.txt");
        ofstream flux1(fichier1.c_str(), ios::app);
        if(flux1)
        {
            flux1 << "humidite : " << dataSens << endl;
            flux1.close();
        }
        break;}
    case 2:{
        string const fichier2("log_ligh.txt");
        ofstream flux2(fichier2.c_str(), ios::app);
        if(flux2)
        {
            flux2 << "lumiere : " << dataSens << endl;
            flux2.close();
        }
        break;}
    case 3:{
        string const fichier3("log_soun.txt");
        ofstream flux3(fichier3.c_str(), ios::app);
        if(flux3)
        {
            flux3 << "son : " << dataSens << endl;
            flux3.close();
        }
        break;}
    default:
        break;
    }
}

string Server::decoder(int dataType)//la fonction utilise un fichier pour faciliter l'ajout de capteurs
{
    ifstream fluxN("log_sensName.txt");
    if(fluxN)
    {
        string sensName;
        for(int i=0;i<=dataType;++i)
        {
            getline(fluxN,sensName);
        }
        return sensName;
    }
    else
    {
        return "error sensName";
    }
}

void Server::consoleWrite(string dataSens, int dataType)
{
    string capteur = decoder(dataType);
    cout << endl << capteur << " : " << dataSens << endl;
}

void Server::fileWrite(string dataSens, int dataType)
{
    switch (dataType) //la declaration de variables necessite les "{}" pour chaque case
    {
    case 0:{
        string const fichier0("log_temp.txt");
        ofstream flux0(fichier0.c_str(), ios::app);
        if(flux0)
        {
            flux0 << "temperature : " << dataSens << endl;
            flux0.close();
        }
        break;}
    case 1:{
        string const fichier1("log_humi.txt");
        ofstream flux1(fichier1.c_str(), ios::app);
        if(flux1)
        {
            flux1 << "humidite : " << dataSens << endl;
            flux1.close();
        }
        break;}
    case 2:{
        string const fichier2("log_ligh.txt");
        ofstream flux2(fichier2.c_str(), ios::app);
        if(flux2)
        {
            flux2 << "lumiere : " << dataSens << endl;
            flux2.close();
        }
        break;}
    case 3:{
        string const fichier3("log_soun.txt");
        ofstream flux3(fichier3.c_str(), ios::app);
        if(flux3)
        {
            flux3 << "son : " << dataSens << endl;
            flux3.close();
        }
        break;}
    default:
        break;
    }
}

void Server::afficheData(string dataSens, int dataType)
{
    if(consoleActivation)
    {
        consoleWrite(dataSens, dataType);
    }
    if(logActivation)
    {
        fileWrite(dataSens, dataType);
    }
}
