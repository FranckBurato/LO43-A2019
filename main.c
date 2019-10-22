#include <iostream>
#include <fstream>
#include "Sheduler.h"

int main()
{
	return 0;
}

template <class Data>
void fileWrite (const Data& dataSens_p, int nFile)
{
	long size;
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

template <class Data>
void consolWrite(const Data& dataSens_p)
{
	std::cout << *dataSens_p << std::endl;
}

template <class Data>
Data aleaGenVal ()
{
	
}
	
	
