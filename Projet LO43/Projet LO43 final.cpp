// Projet LO43 final.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "pch.h"
#include <iostream>
#include "time.h"
#include "Scheduler.cpp"




int main()
{

	srand(time(NULL));
	Scheduler scheduler;
	scheduler.start_simulation();

	return 0;
}

