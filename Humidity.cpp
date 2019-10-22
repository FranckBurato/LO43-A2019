#include "Humidity.h"
#include <time.h>
#include <iostream>
#include <fstream>
#include <iomanip>

string Humidity::aleaGenVal()
{
	srand(time(NULL));
	float data;
	data = rand()%10000;
	data = data/100;

	ostringstream stream;
	stream << fixed << setprecision(2) << data;

	string sData = stream.str();
	return sData;
}
