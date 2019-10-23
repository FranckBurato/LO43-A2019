#pragma once
#ifndef DEF_SERVER
#define DEF_SERVER
#define __STDC_WANT_LIB_EXT1__ 1


#include "time.h"
#include <iostream>
#include <fstream>
using namespace std;

class Server
{
private:
	
	int nbrOfSensors;
	bool consolActivation;
	bool logActivation;
	friend class Scheduler;

public:
	Server();
	Server(const Server& s);
	Server(int nbrOfSensors, bool consolActivation, bool logActivation);
	virtual ~Server();

	Server& operator=(const Server& s);
	friend void operator<<(int dataSens_p, const Server& s);       //filewrite
	friend void operator<<(string dataSens_toString, const Server& s);       //consolewrite

	
	template <class T>
	void consoleWrite(T dataSens_p, string type) {

#ifdef __STDC_LIB_EXT1__
		char str[26];
		ctime_s(str, sizeof str, &result);


		 //获取time_t类型当前时间
		cout << "data of " << type << " is " << dataSens_p << " at: " << str << endl;//转换为常见的字符串：Fri Jan 11 17:04:08 2008
#endif
	
	}



	template <class T>
	void fileWrite(T dataSens_p, string type){
#ifdef __STDC_LIB_EXT1__
		char str[26];
		ctime_s(str, sizeof str, &result);
		//获取time_t类型当前时间

	  //存储数据  std::ofstream outfile("log_fichiers",std::ofstream::app);

		ofstream log_fichiers;
		log_fichiers.open("log_fichiers.txt", ios::app);
		log_fichiers << type<< "is" << dataSens_p << " at: " << str << endl;
		log_fichiers.close();
		ofstream log_fichiers_separee;
		log_fichiers_separee.open(type, ios::app);
		log_fichiers_separee << type << "is" << dataSens_p << " at: " << str << endl;
#endif

	}

	template<class T>
	void dataRcv(T dataSens, string type) {
		if (this->consolActivation == true) {
			this->consoleWrite(dataSens, type);
		}

		if (this->logActivation == true) {
			this->fileWrite(dataSens, type);
		}


	}

};

#endif
