#ifndef LO43_A2019_SERVER_H
#define LO43_A2019_SERVER_H


class Server {
private:
    int capteur;
public:
    Server();
    Server(int);
    Server(Server& other);
    ~Server();
    Server& operator=(const Server&);

    void consoleWrite();
    void fileWrite();
};


#endif //LO43_A2019_SERVER_H
