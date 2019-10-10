#ifndef DEF_SERVER
#define DEF_SERVER

class Server
{ 
    private:
     int nbrOfSensors_m;
     bool consolActivation_m;
     bool logActivation_m;

    public:
     Server();
     Server(const Server& server);
     Server(int nbrOfSensors_m, bool consolActivation_m, bool logActivation_m);
     ~Server();

     Server& operator=(const Server& server);
     Server& operator<<(int dataSens);           
     Server& operator<<(std::string dataSens_toString);  

     void fileWrite(int dataSens);
     void consolWrite(int dataSens);
};

#endif