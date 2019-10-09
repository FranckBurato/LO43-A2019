#ifndef LO43_A2019_SERVER_H
#define LO43_A2019_SERVER_H

#include <iostream>
using namespace std;
#include "../Sensor/Humidity.h"
#include "../Sensor/Sound.h"

class Server {
private:
    Humidity humidity;
    Sound sound;
public:
    Server();
    Server(Server& other);
    ~Server();

    Server& operator=(const Server&);
    friend istream& operator>>(istream&, Server&);

    void consoleWrite();
    void fileWrite();
};

#endif //LO43_A2019_SERVER_H
