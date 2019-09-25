#ifndef SERVER_H
#define SERVER_H


class Server
{
public:
    Server(int capteur1,int capteur2,int capteur3);
    Server(const Server & serv);
    Server& operator=(const Server& serv);
    ~Server();
    void consoleWrite();
    void fileWrite();

private:
    int capteur1;
    int capteur2;
    int capteur3;
};

#endif // SERVER_H
