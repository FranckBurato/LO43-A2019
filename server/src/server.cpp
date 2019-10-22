#include "server.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include <chrono>
#include <ctime>

//Coplien form
Server::Server(): console(1), file(0){
}
Server::Server(const Server& server):console(server.console),file(server.file){}
Server::Server(int console, int file):console(console),file(file){}
Server::~Server(){}
Server& Server::operator=(const Server& server){
    this->console = server.console;
    this->file = server.file;
    return *this;
}

std::ostream& operator<<(std::ostream& os, const Server& server){   //Used to log info about server
    std::time_t time = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
    os << "Server logs :" << std::endl;
    os << "    Date : " << std::ctime(&time) << std::endl;
    os << "    Console Logging : " << server.console << std::endl;
    os << "    File Logging : " << server.file << std::endl;
    os << "End logs" << std::endl;
    return os;
}

void Server::consoleWrite(const std::string &sensorData) const{   //Write string received to cout
    std::time_t time = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
    std::cout << std::ctime(&time) << sensorData << std::endl << std::endl;
}

void Server::fileWrite(const std::string &fileName, const std::string &sensorData) const{ 
    //Write string recieved to file with name "Everything that's before the first ':'
    //in the received string"
    std::ofstream file;
    file.open(fileName, std::ofstream::app);
    std::time_t time = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
    if(file){
	file << std::ctime(&time) << sensorData << std::endl << std::endl;
	file.close();
    }
    else{
	std::cout << std::ctime(&time) << "ERREUR: Impossible d'ouvrir le fichier : " << fileName << std::endl << std::endl;
    }
}

void Server::dataRcv(const std::string &sensorData) const{
    //Receives a string and calls fileWrite and consoleWrite 
    //according to the private variables console and file
    std::string delimiter = " : ";
    size_t pos = 0;
    std::string token;
    std::string dataOnly = sensorData;
    while ((pos = dataOnly.find(delimiter)) != std::string::npos){ 
        //divise one string into two substrings thanks to a delimiter
        token = dataOnly.substr(0,pos);
        dataOnly.erase(0, pos + delimiter.length());
    }
    //Here we call the functions that the server want us to call
    if (file) this->fileWrite(token, sensorData);
    if (console) this->consoleWrite(sensorData);
}
