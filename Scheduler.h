#ifndef SCHEDULER_H
#define SCHEDULER_H
#include <iostream>
#include <string>
#include <time.h>
#include "Temperature.h"
#include "Humidity.h"
#include "Light.h"
#include "Sound.h"
#include "Server.h"

using namespace std;

class Scheduler{
    private:
    Temperature temperature;
    Humidity humidity;
    Light light;
    Sound sound;
    Server server;

    public:

    Scheduler();//constructeur par défaut
  //  Scheduler(Temperature temperature, Humidity humidity, Light light, Sound sound,Server server);
    void getData();
    friend class scheduler;
};

//Constructeur par défaut
Scheduler::Scheduler():
    temperature(),humidity(),light(),sound(),
    server(4,true,true){
        // On va définir l'activité du server ici 
    const int NUM_SECONDS = 2;
    int capteur =0;
    double time_counter = 0;
    clock_t this_time = clock();
    clock_t last_time = this_time;
    
    while(true){
            this_time = clock();

            time_counter += (double)(this_time - last_time);

            last_time = this_time;

                if(time_counter > (double)(NUM_SECONDS * CLOCKS_PER_SEC))
                { 
                    time_counter -= (double)(NUM_SECONDS * CLOCKS_PER_SEC);
                    capteur = capteur +1;
                    cout << "Actualisation des donnees : " << endl;
                    
                    cout << "Capteur numero "<< capteur << " :" << endl;
                    getData();

                   if(capteur >= 4) capteur =0;
                    cout << endl << endl;
                
                }
            }
        
    }


void Scheduler::getData(){

    this->server.dataRcv(this->temperature.sendData(), "Temperature : ");
    this->server.dataRcv(this->humidity.sendData(), "Humidity :");
    this->server.dataRcv(this->light.sendData(), "Light : ");
    this->server.dataRcv(this->sound.sendData(),"Sound : ");

}






#endif