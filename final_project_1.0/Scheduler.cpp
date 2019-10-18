#include <iostream>
#include "scheduler.h"
#include "Sensor.h"
#include "Server.h"
#include <string>
#include <cstdlib>
#include <ctime>
#include <windows.h>

#define s_temp 1//define permettant de choisir a quelles
#define s_humi 1//frequences seront affichees les donnees
#define s_ligh 3//des capteurs
#define s_soun 0//

using namespace std;

Scheduler::Scheduler():valSensor(),temperature(),humidity(),sound(),light(),server(4,true,true)
{}

Scheduler::~Scheduler()
{}

template <class T> string Scheduler::returnValSensor(Sensor<T> &capteur)
{
    valSensor=capteur.returnValSense();
    return valSensor;
}

void Scheduler::simulateur()
{
    int s_temp_act=0,s_humi_act=0,s_ligh_act=0,s_soun_act=0;
    while(1)
    {
        Sleep(1000);

        if(s_temp_act<s_temp){++s_temp_act;}
        else
        {
            server.afficheData(returnValSensor(temperature),0);
            s_temp_act=0;
        }

        if(s_humi_act<s_humi){++s_humi_act;}
        else
        {
            server.afficheData(returnValSensor(humidity),1);
            s_humi_act=0;
        }

        if(s_ligh_act<s_ligh){++s_ligh_act;}
        else
        {
            server.afficheData(returnValSensor(light),2);
            s_ligh_act=0;
        }

        if(s_soun_act<s_soun){++s_soun_act;}
        else
        {
            server.afficheData(returnValSensor(sound),3);
            s_soun_act=0;
        }

        cout << endl << endl; //cette ligne sert a clarifier l'affichage console
    }
}
