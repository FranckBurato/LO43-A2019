#include "Scheduler.h"
#include <chrono>
#include <thread>
#include <iostream>
#include <string>

using namespace std;

Scheduler::Scheduler(){}
Scheduler::Scheduler(const Scheduler& autre):server(autre.server),temperature(autre.temperature),light(autre.light),humidity(autre.humidity),sound(autre.sound){}
Scheduler::~Scheduler(){}

void Scheduler::activateSensor()
{
	while (true)
	{
		cout << temperature.sendData() << endl;
		cout << sound.sendData() << endl;
		cout << light.sendData() << endl;
		cout << humidity.sendData() << endl;
		std::this_thread::sleep_for(std::chrono::milliseconds(1000));
	}
}

void Scheduler::activateSensor(int t, int s, int l, int h, int write)
{
	int it=0,is=0,il=0,ih = 0;
	while (true)
	{
		if (it >= t)
		{
			server.dataRcv(" Température : "+temperature.sendData());
			if (write >= 1)
				server.consoleWrite();
			if (write >= 2)
				server.fileWrite("Temperature.txt");
			it = 0;
		}
		if (is >= s)
		{
			server.dataRcv (" Sound : "+sound.sendData());
			if (write >= 1)
				server.consoleWrite();
			if (write >= 2)
				server.fileWrite("Sound.txt");
			is = 0;
		}
		if (il >= l)
		{
			server.dataRcv (" Light : "+light.sendData());
			if (write >= 1)
				server.consoleWrite();
			if (write >= 2)
				server.fileWrite("Light.txt");
			il = 0;
		}
		if (ih >= h)
		{
			server.dataRcv (" Humidity : "+humidity.sendData());
			if (write >= 1)
				server.consoleWrite();
			if (write >= 2)
				server.fileWrite("Humidity.txt");
			ih = 0;
		}		
		++ih; ++il; ++is; ++it;
		std::this_thread::sleep_for(std::chrono::milliseconds(1000));
	}
}
