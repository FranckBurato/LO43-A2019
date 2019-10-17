#include "Light.h"
#include <time.h>
#include <iostream>
#include <fstream>

int Light::aleaGenVal()
{
	srand(time(NULL));
	return rand()%2;
}
