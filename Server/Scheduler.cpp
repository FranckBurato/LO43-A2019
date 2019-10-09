#include "Scheduler.h"

Scheduler::Scheduler():t(), h(), l(), s(), 
server(4, true, true){
    
}

void Scheduler::getInfos(){
    this->server.dataRcv(this->t.sendData());
    this->server.dataRcv(this->h.sendData());
    this->server.dataRcv(this->l.sendData());
    this->server.dataRcv(this->s.sendData());
}