#include <iostream>
#include <fstream>
#include "server.h"

void server::consoleWrite(){
	std::cout<<temperature<<"\n";
	std::cout<<humidite<<"\n";
	std::cout<<lumiere<<"\n";
	std::cout<<son<<"\n";
}

void server::fileWrite(){
    ofstream logFlux("/log.txt");

    if(logFlux)
    {
        monFlux << temperature << "," << humidite << "," << lumiere << "," << son << endl;
    }
    else
    {
        cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;
    }

}

