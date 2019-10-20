#include<iostream>
#include<ostream>
#include<fstream>
#include "Humidity.h"
#include "Sensor.h"
using namespace std;

Humidity::Humidity():Sensor() /*Initialisation du constructeur par défaut*/
    {
    this->typeCapteur="Humidity" ;
    }

Humidity::~Humidity(){} /*Initialisation du destructeur*/

