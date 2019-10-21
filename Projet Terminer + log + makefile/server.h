#ifndef SERVER_H
#define SERVER_H
#include <iostream>
#include <fstream>

using namespace std;

class server
{
    private :

        int nbrOfSensors;
        bool consolActivation;
        bool logActivation;

	public :


		server ();
		server (const server& other);
		server (int,bool,bool);
		virtual ~server();
		server& operator=(const server& other);

		void operator<<(int dataSensor);
        friend void operator<<(string dataSensorToString, int sensorLog);

		void consoleWrite (int dataSensor, server serv);
		void fileWrite (string dataSensorToString, int sensorLog);

};

#endif // SERVER_H
