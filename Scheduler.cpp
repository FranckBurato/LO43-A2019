#include "Scheduler.h"
#include <string>
//Constructeur par défaut
Scheduler::Scheduler():
    temperature(),humidity(),light(),sound(),
    server(4,true,true){
        // On va définir l'activité du server ici 
    const int NUM_SECONDS = 1;
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
            
            cout << "Actualisation des donnees : " << endl;
            
            getData();

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





