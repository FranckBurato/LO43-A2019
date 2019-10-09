#include <iostream>
#include <string>
#include <fstream>
#include "Server.h"

using namespace std;

SERVER::~SERVER()
{}

SERVER::SERVER(): m_temperature(0), m_humidite(0), m_lumiere(false), m_son(0)
{}

SERVER::SERVER(double temperature, double humidite, bool lumiere, double son):m_temperature(temperature), m_humidite(humidite), m_lumiere(lumiere), m_son(son)
{}

SERVER& SERVER::operator=(SERVER const& b)
{
    m_temperature=b.m_temperature;
    m_humidite=b.m_humidite;
    m_lumiere=b.m_lumiere;
    m_son=b.m_son;
    return *this;
}

void SERVER::consoleWrite(ostream& flux) const
{
    cout << endl << "temperature : " << m_temperature << endl << "humidite : " << m_humidite << endl << "lumiere : " << m_lumiere << endl << "intensite sonore : " << m_son << endl;
}

void SERVER::fileWrite(ostream &flux) const
{
    //Partie temperature
    string const log_tem("C:/Users/leo/Documents/dossier_perso/LO43/projet_TP1/log_tem.txt");
    ofstream temperature_flux(log_tem.c_str(), ios::app);
    if (temperature_flux)
    {
        temperature_flux << m_temperature << "_";
    }
    else
    {
        cout << "prb ouverture fichier";
    }
    temperature_flux.close();

    //Partie humidite
    string const log_hum("C:/Users/leo/Documents/dossier_perso/LO43/projet_TP1/log_hum.txt");
    ofstream humidite_flux(log_hum.c_str(), ios::app);
    if (humidite_flux)
    {
        humidite_flux << m_humidite << "_";
    }
    else
    {
        cout << "prb ouverture fichier";
    }
    humidite_flux.close();

    //partie lumiere
    string const log_lum("C:/Users/leo/Documents/dossier_perso/LO43/projet_TP1/log_lum.txt");
    ofstream lumiere_flux(log_lum.c_str(), ios::app);
    if (lumiere_flux)
    {
        lumiere_flux << m_lumiere << "_";
    }
    else
    {
        cout << "prb ouverture fichier";
    }
    lumiere_flux.close();

    //partie son
    string const log_son("C:/Users/leo/Documents/dossier_perso/LO43/projet_TP1/log_son.txt");
    ofstream son_flux(log_son.c_str(), ios::app);
    if (son_flux)
    {
        son_flux << m_son << "_";
    }
    else
    {
        cout << "prb ouverture fichier";
    }
    son_flux.close();
}

ostream& operator<<(ostream &flux, SERVER const& server)
{
    /*partie consoleWrite*/
    server.consoleWrite(flux);
    /*partie fileWrite
    server.fileWrite(flux);*/
    return flux;
}
