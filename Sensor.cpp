#include "Sensor.h"
#include <time.h>
#include <iostream>
#include <fstream>


Sensor::Sensor(){}
Sensor::Sensor(const Sensor& autre){}
Sensor::~Sensor(){}

/*template <class T> T Sensor::aleaGenVal()
{
	srand(time(NULL));
	return rand()%100;
}*/

string Sensor::sendData ()
{
	return this->aleaGenVal();
}

