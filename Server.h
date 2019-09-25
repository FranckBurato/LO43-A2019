#ifndef SERVER_INCLUDED
#define SERVER_INCLUDED
#include <string>

class server
{
    //Method:
    public:
	server(); //constructor
	~server(); //destructor

	void consoleWrite();
	void fileWrite();

    //Attribut:
    private:
	double m_temperature;
	double m_humidite;
	bool m_lumiere;
	double m_son;
};

#endif
