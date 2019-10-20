#include<iostream>
#include<ostream>
#include<fstream>
#include "Temperature.h"
using namespace std;

Temperature::Temperature():Sensor() /*Initialisation du constructeur par défaut*/
{
    this->typeCapteur="Temperature";
}

Temperature::~Temperature(){} /*Initialisation du destructeur*/
