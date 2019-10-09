#ifndef SERVER_INCLUDED
#define SERVER_INCLUDED
#include <string>
#include <fstream>
#include <iostream>

class SERVER
{
    //Method:
    public:
	SERVER(); //constructor
	SERVER(double temperature, double humidite, bool lumiere, double son);
	~SERVER(); //destructor

	void consoleWrite(std::ostream& flux) const;
	void fileWrite(std::ostream& flux) const;
	SERVER& operator=(SERVER const& b);

    //Attribut:
    private:
	double m_temperature;
	double m_humidite;
	bool m_lumiere;
	double m_son;
};

std::ostream& operator<<(std::ostream& flux, SERVER const& server);
#endif
