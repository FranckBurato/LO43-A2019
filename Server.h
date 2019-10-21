#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Server{
    private :
    int nbrOfSensors;
    bool consolActivation;
    bool logActivation;
    public:
        Server(); // Constructeur par défaut
        Server(int nbrOfSensors, bool consolActivation,bool logActivation); // Constructeur avec argument
        Server(const Server&); // Constructeur par recopie

        //Surcharge operator

        Server& operator = (const Server&);
        friend void operator<<(string, int);
      

        ~Server(); // Destructeur

        template <typename T>
        void dataRcv(T dataSens, string message);
        template <typename T>
        void consoleWrite(T dataSens_p,string message); // attribut message a rajouter
        template <typename T>
        void fileWrite(T dataSens_p,string message);  // attribut message a rajouter

};


//Constructeur par défaut
Server::Server():nbrOfSensors(), consolActivation(),
            logActivation(){}
 

//Constructeur avec argument
Server::Server(int nbrOfSensors,bool consolActivation,bool logActivation){
    this->nbrOfSensors = nbrOfSensors;
    this->consolActivation = consolActivation;
    this->logActivation = logActivation;
}

//Constructeur par recopie
Server::Server(const Server& server){
        this -> nbrOfSensors= server.nbrOfSensors;
        this->consolActivation = server.consolActivation;
        this->logActivation = server.logActivation;
}

Server& Server:: operator=(const Server& server){
     if(this != &server){
        this->nbrOfSensors = server.nbrOfSensors;
        this->consolActivation = server.consolActivation;
        this->logActivation = server.logActivation;
    }
    return *this;
}

template <typename T>
void operator<<(string dataSens_toString, T dataSens){
    ofstream mylog;
    mylog.open("log/log_file_capteur.txt", ios::out | ios::app );
    mylog << dataSens <<"\n\n";
    mylog.close();
}



/* Server& Server:: operator <<(const Server& server){
    fileWrite(Server.nbrOfSensors);
    return *this;
}*/

//Destructeur
Server::~Server(){

}

template <typename T>
void Server::consoleWrite(T dataSens_p, string message){
    cout << message << " " << dataSens_p << "\n";
}

template <typename T>
void Server::fileWrite(T dataSens_p, string message){
    ofstream logs;
    logs.open("log_capteur.txt", ios::out | ios::app );
    logs << message << "\n" << dataSens_p <<"\n" ;
    logs.close();
}
 
template <typename T>
void Server::dataRcv(T dataSens,string sensor){
    if(this->consolActivation==true){
        this->consoleWrite(dataSens,sensor);
    }
    if(this->logActivation==true){
        this->fileWrite(dataSens,sensor);
    }
}

