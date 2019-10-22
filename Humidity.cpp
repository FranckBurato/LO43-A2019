#include "Humidity.h"
#include <time.h>
#include <iostream>
#include <fstream>

string Humidity::aleaGenVal()
{
	srand(time(NULL));
	float data;
	data = rand()%10000;
	data = data/100;
	return to_string(data);
}
