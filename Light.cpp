#include<iostream>
#include<ostream>
#include<fstream>
#include "Light.h"
using namespace std;

Light::Light():Sensor() /*Initialisation du constructeur par d�faut*/
    {
    this->typeCapteur="Light";
    }

Light::~Light(){} /*Initialisation du destructeur*/
