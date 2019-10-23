#ifndef LO43_A2019_SERVER_H
#define LO43_A2019_SERVER_H

#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

void operator<<(int, const string &);

class Server {
private:
    bool consoleActivation;
    bool logActivation;

    friend class Scheduler;

public:
    Server();

    Server(const Server &);

    Server(bool, bool);

    ~Server();

    Server &operator=(const Server &);

    void operator<<(const string &);

    template<typename T>
    void dataReceive(T data, int fileFlag) {
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

    static void consoleWrite(const string &);

    static void fileWrite(const string &, int);
};

#endif //LO43_A2019_SERVER_H
