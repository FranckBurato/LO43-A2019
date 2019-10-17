#ifndef SCHEDULER_H
#define SCHEDULER_H
#include <iostream>
#include <string>
#include "Server.h"
#include "Humidity.h"
#include "Light.h"
#include "Sound.h"
#include "Temperature.h"


using namespace std;

class Scheduler{

    private:

        //declaration of 4 sensors
        Temperature t;
        Humidity h;
        Light l;
        Sound s;
        

        Server server;  
        void getInfos();      

    public:
        Scheduler();
        
};


Scheduler::Scheduler():t(), h(), l(), s(), 
server(4, true, true){

    const int NUM_SECONDS = 3;
    int count = 1;
    double time_counter = 0;
    clock_t this_time = clock();
    clock_t last_time = this_time;

    cout << "******Server will start soon... Press ctrl-c to stop it******" << endl << endl;
    while(true){
        this_time = clock();

        time_counter += (double)(this_time - last_time);

        last_time = this_time;

        if(time_counter > (double)(NUM_SECONDS * CLOCKS_PER_SEC))
        { 
            time_counter -= (double)(NUM_SECONDS * CLOCKS_PER_SEC);
            
            cout << "Results number " << count << " of the server:" << endl;
            
            getInfos();

            cout << endl << endl;
            count++;
        }
    }

}

void Scheduler::getInfos(){
   
    this->server.dataRcv(this->t.getName(), this->t.sendData());
    this->server.dataRcv(this->h.getName(), this->h.sendData());
    this->server.dataRcv(this->l.getName(), this->l.sendData());
    this->server.dataRcv(this->s.getName(), this->s.sendData()); 
    
    //we want to have different values for each sensor
    this->t.resetValue();
    this->h.resetValue();
    this->l.resetValue();
    this->s.resetValue();
}


#endif