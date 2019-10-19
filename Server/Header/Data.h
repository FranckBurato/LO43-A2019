
//
// Created by Alomb on 19/10/2019.
//

#ifndef SERVER_DATA_H
#define SERVER_DATA_H


#include <string>
#include "Server.h"

class Data {
private:
    std::string data;
    std::string logPath;

public:
    Data();
    Data(const Data&);
    Data(const std::string&, std::string&);

    virtual ~Data();
    Data& operator=(const Data&);

    friend void Server::consoleWrite(const Data&);
    friend void Server::fileWrite(const Data&);
};


#endif //SERVER_DATA_H

