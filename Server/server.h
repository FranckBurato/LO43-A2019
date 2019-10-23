#ifndef SERVER_H
#define SERVER_H


#include<iostream>
#include<string>
#include"sensor.h"
using namespace std;

class Server {
	public:
		Server();
		~Server();
		Server(const Server& server_p);
		Server(int nbrOfSensors_p, bool consolActivation, bool logActivaton);
		Server& operator=(const Server& server_p);
		void operator<<(const int dataSens);
		// void operator<<(const string dataSens_toString);
		void dataRcv(int dataSens);  //收到sensor 的数据
        void fileWrite(string T,int dataSens_p); //写入文件sensor的数据
        void fileWrite(string T,float dataSens_p);
        void fileWrite(string T,bool dataSens_p);
        void consoleWrite(float dataSens); //展示到屏幕上sensor的数据

	private:
		int nbrOfSensors;
		bool consolActivation;
		bool logActivation;
};

#endif //SERVER_H
