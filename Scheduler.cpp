#include "Scheduler.h"
//Constructeur par défaut
Scheduler::Scheduler():
    temperature(),humidity(),light(),sound(),server(4,true,true){}


void Scheduler::getData(){
    this->server.dataRcv(this->temperature.sendData());
    this->server.dataRcv(this->humidity.sendData());
    this->server.dataRcv(this->light.sendData());
    this->server.dataRcv(this->sound.sendData());
}





