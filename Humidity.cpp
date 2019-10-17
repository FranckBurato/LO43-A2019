#include "Humidity.h"
#include <time.h>
#include <iostream>
#include <fstream>

int Humidity::aleaGenVal()
{
	srand(time(NULL));
	return rand()%10000;
}
