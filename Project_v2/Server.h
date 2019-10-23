#ifndef SERVER_H
#define SERVER_H

#include <iostream>
#include <string>
#include <fstream>

class Server
{
    public:

        Server();
        Server(int nbrOfSensors, bool consolActivation, bool logActivation);
        virtual ~Server();
        Server(const Server& other);

        Server& operator=(const Server& other);
//       std::ostream& operator<<(int dataSens);
//       std::string operator<<(int numFile,std::string dataSens_toString);

        void consoleWrite(std::string dataSens_p, std::string sensorName);
        void fileWrite(std::string sensorName, std::string dataSens_toString);

        void dataRcv(std::string dataSens, std::string fileName, std::string sensorName);


    private:

        int nbrOfSensors;                       //nombre de capteur(s)
        bool consolActivation, logActivation;
};

#endif // SERVER_H

