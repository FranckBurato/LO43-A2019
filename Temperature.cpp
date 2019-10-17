#include "Temperature.h"
#include <time.h>
#include <iostream>
#include <fstream>

int Temperature::aleaGenVal()
{
	srand(time(NULL));
	return rand()%100-40;
}



