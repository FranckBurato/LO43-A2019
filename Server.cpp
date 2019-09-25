#include <iostream>
#include <string>
#include "Server.h"

using namespace std;

server::~server()
{
}

server::server(): m_temperature(0), m_humidite(0), m_lumiere(false), m_son(0)
{
}

void server::consoleWrite()
{
    cout << endl << "temperature : " << m_temperature << endl << "humidite : " << m_humidite << endl << "lumiere : " << m_lumiere << endl << "intensite sonore : " << m_son << endl;
}

void server::fileWrite()
{

}

