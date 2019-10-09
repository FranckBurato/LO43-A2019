#include "Server.h"
#include <iostream>
#include <time.h>


using namespace std;

		
Sensor::Sensor(){}
Sensor::Sensor(const Sensor &){}
Sensor::~Sensor(){}

template <class T> T Sensor::aleaGenVal(){

	srand(time(NULL));
    	return  rand()%30+1;   //Entre 1 et 30
}

