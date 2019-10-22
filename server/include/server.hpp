#include <string>
#include <iostream>
#ifndef SERVER_H
#define SERVER_H

class Server{
	private:
        bool console, file;
	public:
        //Coplien form
		Server();
		Server(const Server& server);
		virtual ~Server();
		Server& operator=(const Server& server);

		friend std::ostream& operator<<(std::ostream& os, const Server& server);
        //Used to log info about server

		void consoleWrite(const std::string &sensorData) const; 
        //Write string recieved to cout

		void fileWrite(const std::string &fileName, const std::string &sensorData) const;
        //Write string recieved to file with name "Everything that's before the first ':'
        //in the received string"
        
        void dataRcv(const std::string &sensorData) const; 
        //Receives a string and calls fileWrite and consoleWrite 
        //according to the private variables console and file
};
#endif /* ifndef SERVER_H */
