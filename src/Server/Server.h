#ifndef LO43_A2019_SERVER_H
#define LO43_A2019_SERVER_H

#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

class Server {
private:
    bool consoleActivation;
    bool logActivation;

    friend class Scheduler;

public:
    Server();

    Server(Server &other);

    Server(bool, bool);

    ~Server();

    Server &operator=(const Server &);

    void operator<<(const string &);

    template<class T>
    void dataReceive(T, int);

    static void consoleWrite(const string &);

    static void fileWrite(const string &, int);
};

void operator<<(int, const string &);

template<typename T>
void Server::dataReceive(T data, int fileFlag) {
    std::stringstream ss;
    ss << setprecision(2) << fixed << boolalpha << data;
    string dataString = ss.str();

    if (this->consoleActivation) {
        *this << dataString;
    }
    if (this->logActivation) {
        fileFlag << dataString;
    }
}

#endif //LO43_A2019_SERVER_H
