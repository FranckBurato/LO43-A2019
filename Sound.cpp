#include<iostream>
#include<ostream>
#include<fstream>
#include "Sound.h"
using namespace std;

Sound::Sound():Sensor() /*Initialisation du constructeur par d�faut*/
    {
    this->typeCapteur="Sound";
    }
Sound::~Sound(){} /*Initialisation du destructeur*/
