#ifndef SERVER_H
#define SERVER_H
#include <fstream>
#include <iostream>


class Server
{
public:
    Server();
    Server(int capteur1,int capteur2,int capteur3);
    Server(int nbrOfSensors,bool consolActivation,bool logActivation);
    Server(const Server & serv);
    Server& operator=(const Server& serv);
    ~Server();
    void operator<<(int data);
    void operator<<(std::string dataString);
    void dataRcv(int dataSens);
    void consoleWrite(int dataSens_p);
    void fileWrite(int dataSens_p);

private:
    int nbrOfSensors;
    bool consolActivation;
    bool logActivation;
    int capteur1;
    int capteur2;
    int capteur3;
};
std::ostream& operator << (std::ostream& sortie, const Server & n);

#endif // SERVER_H
