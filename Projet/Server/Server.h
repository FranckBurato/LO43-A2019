#ifndef SERVER_H
#define SERVER_H

#include <string>
#include "../Sensors/SensorInterface.h"

class Server {
	public:
		Server();
		Server(const Server& server);
		Server(bool consolActivation, bool logActivation);
		virtual ~Server();
		
		Server & operator=(const Server& server);
		void operator<<(SensorInterface *sensor);
	private:
		void consoleWrite(SensorInterface *sensor);
		void fileWrite(SensorInterface *sensor);

		bool consolActivation;
		bool logActivation;
};

#endif // SERVER_H
