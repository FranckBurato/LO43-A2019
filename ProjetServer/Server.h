#ifndef DEF_SERVER
#define DEF_SERVER

class Server
{ 
    private:
     

    public:
     Server();
     Server(const Server&);
     ~Server();
     Server& operator=(const Server&);  //Forme canonique de Coplien
    
     void consolWrite();   //Visualise les données dans la console
     void fileWrite();     //Ecrit les données ds un fichier
};

#endif