#pragma once
#ifndef SCHEDULER_H

#define SCHEDULER_H



#include"server.h"
#include "Sensor.h"
#include <unistd.h>

using namespace std;


class Scheduler {
private:
	friend class Server;
	template<class T>
	friend class Sensor;
	
	

public:
		Scheduler() {}                
		~Scheduler() {}
Temperature temperature;
	Humidity humidity;
	Light light;
	Sound sound;
	Server server;

	void inventer(Server& se, Temperature* ter, Humidity* hum, Light* lig, Sound* sou) {
		se.dataRcv(ter->sendData(), "Temperature : ");

		se.dataRcv(hum->sendData(), "Humidity :");

		se.dataRcv(lig->sendData(), "Light : ");

		se.dataRcv(sou->sendData(), "Sound : ");
		pid_t pId1 = fork();

		int count1 = 0;

		if (pId1 == -1) {

			perror("fork error");

			exit(EXIT_FAILURE);

		}
		else if (pId1 == 0) {

			do {

				if (count1 > 4) return EXIT_SUCCESS;

				else {

					s.dataRcv(te.sendData(), te.sendName());

					sleep(1000);

					count1++;

				}

			} while (1);

			return EXIT_SUCCESS;

		}







		pid_t pId2 = fork();

		if (pId2 == -1) {

			perror("fork error");

			exit(EXIT_FAILURE);

		}
		else if (pId2 == 0) {

			do {

				if (count1 > 4) return EXIT_SUCCESS;

				else {

					s.dataRcv(hu.sendData(), hu.sendName());

					sleep(2000);

					count1++;

				}

			} while (1);

			return EXIT_SUCCESS;

		}









		pid_t pId3 = fork();

		if (pId3 == -1) {

			perror("fork error");

			exit(EXIT_FAILURE);

		}
		else if (pId3 == 0) {

			do {

				if (count1 > 4) return EXIT_SUCCESS;

				else {

					s.dataRcv(li.sendData(), li.sendName());

					sleep(3000);

					count1++;

				}

			} while (1);

			return EXIT_SUCCESS;

		}







		pid_t pId4 = fork();

		if (pId4 == -1) {

			perror("fork error");

			exit(EXIT_FAILURE);

		}
		else if (pId4 == 0) {

			do {

				if (count1 > 4) return EXIT_SUCCESS;

				else {

					s.dataRcv(so.sendData(), so.sendName());

					sleep(4000);

					count1++;

				}

			} while (1);

			return EXIT_SUCCESS;

		}

		wait(&pId1);

		wait(&pId2);

		wait(&pId3);

		wait(&pId4);







		return EXIT_SUCCESS;


		
		//接收传感器信息且不同时间间隔传递   
	   }

	

	
};


#endif