#ifndef LO43_A2019_SERVER_H
#define LO43_A2019_SERVER_H

#include <iostream>
using namespace std;
#include "../Sensor/Humidity.h"

class Server {
private:
    Humidity humidity;
public:
    Server();
    Server(Server& other);
    ~Server();

    Server& operator=(const Server&);
    friend istream& operator>>(istream&, Server&);

    void consoleWrite(const string&);
    void fileWrite(const string&);
};



#endif //LO43_A2019_SERVER_H
