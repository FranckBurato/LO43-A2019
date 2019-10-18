#ifndef SERVER_H_INCLUDED
#define SERVER_H_INCLUDED
#include <iostream>
#include "scheduler.h"
#include "Sensor.h"
#include "Server.h"
#include <string>
#include <cstdlib>
#include <ctime>

class Server
{
    //attribut
private:
    int nbrOfSensors;//non utilisee
    bool consoleActivation;
    bool logActivation;

    //methode
public:
    Server();
    Server(Server &server_p);
    Server(int nbrOfSensors, bool consoleActivation, bool logActivation);
    ~Server();

    Server &operator=(Server &server_p);
    std::ostream &operator<<(std::string dataSens);//les surcharges '<<' n'ont pas ete utilisee
    friend std::ostream &operator<<(std::string dataSens, int dataType);//
    std::string decoder(int dataType);//pose un nom sur le numero d'un capteur
    void consoleWrite(std::string dataSens, int dataType);
	void fileWrite(std::string dataSens, int dataType);
	void afficheData(std::string dataSens, int dataType);
};

#endif // SERVER_H_INCLUDED
