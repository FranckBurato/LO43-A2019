#include "Sound.h"
#include <time.h>
#include <iostream>
#include <fstream>

string Sound::aleaGenVal()
{
	srand(time(NULL));
	return to_string(rand()%150);
}
