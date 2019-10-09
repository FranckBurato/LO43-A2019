#include "server.hpp"
#include <iostream>
#include <fstream>
#include <string>


Server::Server(): temperature(), humidity(), brightness(), loudness(){
}

//Server::Server(std::string str):data(str){
//}

Server::Server(const Server& server):temperature(server.temperature), humidity(server.humidity), brightness(server.brightness), loudness(server.loudness){}

Server::~Server(){}

Server& Server::operator=(const Server& server){
    //this->data=server.data;
    this->temperature = server.temperature;
    this->humidity = server.humidity;
    this->brightness = server.brightness;
    this->loudness = server.loudness;
    return *this;
}

std::ostream& operator<<(std::ostream& os, const Server& server) {
    os << "Server logs :" << std::endl;
    os << "    Temperature : " << server.temperature << std::endl;
    os << "    Humidity : " << server.humidity << std::endl;
    os << "    Brightness : " << server.brightness << std::endl;
    os << "    Loudness : " << server.loudness << std::endl;
    os << "End logs" << std::endl;
    return os;
}

void Server::consoleWrite() {
    std::cout<< this << std::endl;
}

void Server::fileWrite(const std::string &name) {
    std::ofstream file;
    file.open(name);
    if(file){
	file<< this << std::endl;
	file.close();
    }
    else{
	std::cout << "ERREUR: Impossible d'ouvrir le fichier" << std::endl;
    }
}
