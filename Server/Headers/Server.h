//
// Created by Alomb on 19/10/2019.
//

#ifndef LO43SERVER_SERVER_H
#define LO43SERVER_SERVER_H

class Data;
class Server{
private:
    bool consolActivation;
    bool logActivation;

public:
    Server();
    Server(const Server&);
    ~Server();
    Server& operator=(const Server&);
    void consoleWrite(const Data&);
    void fileWrite(const Data&);

    friend Server& operator<<(Server& ,const Data&);
//    friend void Scheduler::run();
};

Server& operator<<(Server&, const Data&);


#endif //LO43SERVER_SERVER_H
