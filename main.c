#include <iostream>
#include <fstream>
#include <time.h>
#include <stdlib.h>
#include "Sheduler.h"
#define INTERVALLE_MAX 60
#define TEMPS_UTILISATION 120
#define RAND_MAX 1.00
#define HUMIDITY_MAX 1.00
#define TEMPERATURE_MAX 50.0
#define SOUND_MAX 100

int main()
{
//CHOISIR L'INTERVALLE DE TEMPS ENTRE LES MESURES
	int temps;
	std::cout << "Quel intervalle de temps en secondes?\n" << std::endl;
	std::cin >> temps;
	while(temps>=INTERVALLE_MAX)
	{
		std::cout << "Trop grand.\n" << std::endl;
		std::cin >> temps;
	}
//ENVOIE DES DONNES DES SENSORS AU SCHEDULER A INTERVALLE REGULIER
	for(i=0,i<=TEMPS_UTILISATION/temps,++i)
	{
		
		Sleep(temps*1000);
	}
//FIN DE LA BOUCLE
	return 0;
}

//ON UTILISE UN TEMPLATE DATA POUR FLOAT / INT / BOOL
template <class Data>
void fileWrite (const Data& dataSens_p, int nFile)
{
	switch (nFile)
	{
		case 1:
//ECRIRE DANS LE FICHER HUMIDITY
 			std::ofstream myfile;
			myfile.open("humidity.txt");
  			std::cout << *dataSens_p << std::endl;
  			myfile.close();
		break;
		case 2:
//ECRIRE DANS LE FICHIER TEMPERATURE	
			std::ofstream myfile;
			myfile.open("temperature.txt");
  			std::cout << *dataSens_p << std::endl;
  			myfile.close();
		break;
		case 3:
//ECRIRE DANS LE FICHIER LIGHT	
			std::ofstream myfile;
			myfile.open("light.txt");
  			std::cout << *dataSens_p << std::endl;
  			myfile.close();
		break;
		case 4:
//ECRIRE DANS LE FICHIER SOUND	
			std::ofstream myfile;
			myfile.open("sound.txt");
  			std::cout << *dataSens_p << std::endl;
  			myfile.close();
		break;
	};
}

//ON UTILISE UN TEMPLATE DATA POUR FLOAT / INT / BOOL
template <class Data>
void consolWrite(const Data& dataSens_p)
{
	std::cout << *dataSens_p << std::endl;
}

//ON UTILISE UN TEMPLATE DATA POUR FLOAT / INT / BOOL
template <class Data>
Data aleaGenVal (int nType)
{
	srand(time(NULL));
	switch (nFile)
	{
		case 1:
//GENERER UNE VALEUR ALEATOIRE POUR HUMIDITY
 			return (float)rand()/(float)(RAND_MAX)*HUMIDITY_MAX;
		break;
		case 2:
//GENERER UNE VALEUR ALEATOIRE POUR TEMPERATURE	
			return (float)rand()/(float)(RAND_MAX)*TEMPERATURE_MAX;
		break;
		case 3:
//EGENERER UNE VALEUR ALEATOIRE POUR LIGHT	
			return rand()%1;
		break;
		case 4:
//GENERER UNE VALEUR ALEATOIRE POUR SOUND	
			return return rand()%SOUND_MAX;
		break;
	};
}
	


