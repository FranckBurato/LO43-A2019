//
// Created by Alomb on 19/10/2019.
//

#ifndef LO43SERVER_DATA_H
#define LO43SERVER_DATA_H


#include <string>
#include "Server.h"

class Server;
class Data {
private:
    std::string data;
    std::string logPath;

public:
    Data();
    Data(const Data&);
    Data(const std::string&, const std::string&);

    virtual ~Data();
    Data& operator=(const Data&);

    friend void Server::consoleWrite(const Data&);
    friend void Server::fileWrite(const Data &);
};


#endif //LO43SERVER_DATA_H
