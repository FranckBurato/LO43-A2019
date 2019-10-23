
#include <iostream>
#include <typeinfo.h>
#include "Scheduler.h"
#define PUT_TEMPERATURE 10
#define PUT_HUMIDITY 11
#define PUT_SOUND 12
#define PUT_LIGHT 13
using namespace std;

Scheduler::Scheduler():s1(4,true, true), t1(0), h1(0), l1(0), so1(0){}

Scheduler::~Scheduler(){}

void Scheduler:: RecupererEtTransmise(){
    int TIME=0;
    while(1){
        if(TIME % PUT_TEMPERATURE == 0){
            t1.aleaGenVal();
            s1.consoleWrite(t1.sendData());
            s1.fileWrite(typeid(t1).name(), t1.sendData());
        }
        else if(TIME % PUT_HUMIDITY == 0){
            h1.aleaGenVal();
            s1.consoleWrite(h1.sendData());
            s1.fileWrite(typeid(h1).name(), h1.sendData());
        }
        else if(TIME % PUT_LIGHT == 0){
            l1.aleaGenVal();
            s1.consoleWrite(l1.sendData());
            s1.fileWrite(typeid(l1).name(), l1.sendData());
        }
        else if(TIME % PUT_SOUND == 0){
            so1.aleaGenVal();
            s1.consoleWrite(so1.sendData());
            s1.fileWrite(typeid(so1).name(), so1.sendData());
        }
    }
    TIME++;
    return;
}
