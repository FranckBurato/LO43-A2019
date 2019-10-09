#include <sstream>
#include <ctime>
#include "Scheduler.h"

Scheduler::Scheduler() :
           server(), humidity(), sound(), temperature(), light()
{}

void Scheduler::run() {
    while (true) {
        int now = std::time(nullptr);

        if (now - this->humidity.lastUpdate >= this->humidity.delay) {
            this->server.dataReceive(this->humidity.sendData(), 0);
            this->humidity.aleaGenVal();
            this->humidity.lastUpdate = now;
        }

        if (now - this->sound.lastUpdate >= this->sound.delay) {
            this->server.dataReceive(this->sound.sendData(), 1);
            this->sound.aleaGenVal();
            this->sound.lastUpdate = now;
        }

        if (now - this->temperature.lastUpdate >= this->temperature.delay) {
            this->server.dataReceive(this->temperature.sendData(), 2);
            this->temperature.aleaGenVal();
            this->temperature.lastUpdate = now;
        }

        if (now - this->light.lastUpdate >= this->light.delay) {
            this->server.dataReceive(this->light.sendData(), 3);
            this->light.aleaGenVal();
            this->light.lastUpdate = now;
        }
    }
}
