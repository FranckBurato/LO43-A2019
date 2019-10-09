#ifndef SERVER_H
#define SERVER_H


class Server
{
    private:
        int nbrOfSensors;
        bool consolActivation;
        bool logActivation;

	public:
		Server();
		Server(const Server& server_p);
		Server(int nbrOfSensor_p, bool consolActivation,bool logActivation);
		~Server ();
		Server &operator=(const Server&server_p);
		Server &operator>>(string dataSens_toString);
		Server &operator>>(int dataSens);

        void dataRvc(int dataSens)
		void consoleWrite(int dataSens_p);
		void fileWrite(int dataSens_p);
};

#endif // SERVER_H
