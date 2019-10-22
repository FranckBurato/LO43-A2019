#pragma once
#include <list>
#include<iostream>
#include<ctime>
#include "server.h"
#include "Sensor.h"
using namespace std;
class Scheduler {
private:
	Server s;
	list <Sensor*> tab;//il y a un list pour des sensors
public:
	//la forme canonique de coplien
	Scheduler() :s(), tab() {};
	Scheduler(Scheduler& a) :s(a.s), tab(a.tab) {};
	~Scheduler();
	Scheduler& operator=( Scheduler& a);

	void begin();//pour rajouter des sensor et configuration
	void run();//mod¨¦lisation du syst¨¨me
};