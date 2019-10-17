#include "Sound.h"
#include <time.h>
#include <iostream>
#include <fstream>

int Sound::aleaGenVal()
{
	srand(time(NULL));
	return rand()%150;
}
