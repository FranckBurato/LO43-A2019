#ifndef LO43_A2019_SERVER_H
#define LO43_A2019_SERVER_H

#include <iostream>
#include <sstream>
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

    template <class T>
    void dataReceive(T data, int flag);

    static void consoleWrite(const int&);
    static void fileWrite(const string&, int);
};

template<class T>
void Server::dataReceive(T data, int flag) {
    if (this->consoleActivation) {
        *this << data;
    }
    if (this->logActivation) {
        std::stringstream ss;
        ss << data;
        Server::fileWrite(ss.str(), flag);
    }
}

#endif //LO43_A2019_SERVER_H
