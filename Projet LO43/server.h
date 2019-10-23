#include <iostream>
#include <string>



using namespace std;
using namespace std::chrono;

class Server {
private:
	int nbrOfSensors;
	bool consolActivation;
	bool logActivation;

public:
	Server() : nbrOfSensors(4), consolActivation(true), logActivation(true) {};

	Server(const Server& server_p) : nbrOfSensors(server_p.nbrOfSensors), consolActivation(server_p.consolActivation), logActivation(server_p.logActivation) {};

	virtual ~Server() {};

	Server& operator=(const Server& server_p);
	void operator<<(int dataSens);
	void operator<<(string dataSens_toString);
	void dataRcv(int dataSens);
	void consoleWrite(string dataSens_toString, int Sensor_type);
	void fileWrite(string dataSens_toString, int Sensor_type);

	bool get_consolActivation();
	bool get_logActivation();

};
