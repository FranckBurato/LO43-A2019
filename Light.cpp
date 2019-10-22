#include "Light.h"
#include <time.h>
#include <iostream>
#include <fstream>

string Light::aleaGenVal()
{
	srand(time(NULL));
	if (rand()%2==0) 
		return to_string(false);
	return to_string(true);
}
