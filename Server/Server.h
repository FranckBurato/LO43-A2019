#ifndef SERVER_H
#define SERVER_H

#include <string>

class Server {
	public:
		Server();
		Server(const Server& server);		
		Server(int nbrOfSensors_p, bool consolActivation, bool logActivation);
		~Server();
		
		Server & operator=(const Server& server);
		void operator>>(const Server & server);
		void operator>>(std::string dataSens_toString);
		void operator>>(int dataSens);
		void dataRcv(int dataSens);
	private:
		void consoleWrite(int dataSens_p);
		void fileWrite(int dataSens_p);

		int nbrOfSensors;
		bool consolActivation;
		bool logActivation;
};

#endif // SERVER_H
