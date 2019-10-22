#include "scheduler.h"
#include "Server.h"
#include <conio.h>
#include <windows.h>
#include <iostream>
using namespace std;
void Scheduler::run()
{
		cout << "Il y a quatre capteurs ci-dessous: Temperature, Humidity, Sound, Light" << endl;
		cout << "   " << endl;
		cout << "Selection du mode: 1.ConsoleWrite 2.FileWrite 3.Les deux" << endl;
		int choiceRcv;
		cin >> choiceRcv;
		switch (choiceRcv)
		{
		case 1:
			s = Server(4, true, false);
			break;
		case 2:
			s = Server(4, false, true);
			break;
		case 3:
			s = Server(4, true, true);
			break;
		default:
			break;
		}

		for (int i = 0; i < 5; i++)
		{
			int x;
			default_random_engine e(time(0));
			uniform_real_distribution<float> u(1, 5);
			x = int(u(e) * 1000);
			Sleep(x);
			s.dataRcv(t);
			s.dataRcv(h);
			s.dataRcv(so);
			s.dataRcv(l);
		}
	}