#ifndef LO43_A2019_SERVER_H
#define LO43_A2019_SERVER_H

#include <iostream>
using namespace std;

class Server {
private:
    bool consoleActivation;
    bool logActivation;

    friend class Scheduler;

public:
    Server();
    Server(Server& other);
    Server(bool, bool);
    ~Server();

    Server& operator=(const Server&);
    void operator<<(const int&);
    friend void operator<<(const string&, int);

    static void consoleWrite(const int&);
    static void fileWrite(const string&, int);
};

#endif //LO43_A2019_SERVER_H
