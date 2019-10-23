#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <cstdio>
#include <windows.h>
#include "Scheduler.h"
#include "Temperature.h"
#include "Humidity.h"
#include "Light.h"
#include "Sound.h"
#include "Server.h"
#include "Sensor.h"


//Constructeur par défaut
Scheduler::Scheduler():temperature(),humidity(),light(), sound(),server(){};


//Destructeur
Scheduler::~Scheduler(){};


//Constructeur par recopie
Scheduler::Scheduler(const Scheduler& other)
{
    this->temperature = other.temperature;
    this->humidity = other.humidity;
    this->light = other.light;
    this->sound = other.sound;
    this->server = other.server;
};


//Surcharge de l'opérateur =
Scheduler& Scheduler::operator=(const Scheduler& other)
{
    this->temperature = other.temperature;
    this->humidity = other.humidity;
    this->light = other.light;
    this->sound = other.sound;
    this->server = other.server;

    return *this;
};

//Fonction qui agit comme un main
void Scheduler::simulateur()
{
    //création d'une boucle qui tournera tout le temps

    int i = 0, lim = 50, t = 200;
    srand(time(NULL));
    int son;
    float humi, temp;
    bool lum;

    while (i<lim)               //Si l'on veut plus de valeurs, il suffit d'augmenter la limite et de réduire les modulos
    {
        //on relève la valeur du capteur Temperature
        if(i%2 == 0)
        {
            temp = temperature.aleaGenVal(1);                                                   //on génère la valeur
            this->server.dataRcv(temperature.sendData(temp),"temperature.txt","Temperature");   //on décide où écrire la valeur puis on l'écrit
        }

        //on relève la valeur du capteur Humidity
        if (i%3 == 0)
        {
            humi = humidity.aleaGenVal(2);                                              //on génère la valeur
            this->server.dataRcv(humidity.sendData(humi),"humidity.txt","Humidity");    //on décide où l'écrire puis on l'écrit
        }

        //on relève la valeur du capteur Sound
        if (i%4 == 0)
        {
            son = sound.aleaGenVal(3);                                          //on génère une valeur
            this->server.dataRcv(sound.sendData(son),"sound.txt","Sound");      //on décide où écrire la valeur puis on l'écrit
        }

        //on relève la valeur du capteur Light
        if (i%5 == 0)
        {
            lum = light.aleaGenVal(4);                                          //on génère une valeur
            this->server.dataRcv(light.sendData(lum),"light.txt","Light");      //on décide où écrire la valeur puis on l'écrit
        }

        Sleep(t);       //fonction qui endore le programme pendant t ms
        ++i;
    }
}
