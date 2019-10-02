#ifndef SERVER_H
#define SERVER_H
#include <fstream>
#include <iostream>

class Server
{
public:
    Server(int capteur1,int capteur2,int capteur3);
    Server(const Server & serv);
    Server& operator=(const Server& serv);
    ~Server();
    void consoleWrite()const;
    void fileWrite()const;

private:
    int capteur1;
    int capteur2;
    int capteur3;
};
std::ostream& operator << (std::ostream& sortie, const Server & n); 

#endif // SERVER_H
