#include "Temperature.h"
#include <time.h>
#include <iostream>
#include <fstream>

string Temperature::aleaGenVal()
{
	srand(time(NULL));
	float data;
	data = rand()%10000;
	data -= 4000;
	data = data/100;
	return to_string(data);
}



