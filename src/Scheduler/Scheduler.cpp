#include <ctime>
#include <winbase.h>

#include "Scheduler.h"

Scheduler::Scheduler() :
           server(),
           humidity(), sound(), temperature(), light()
{}

void Scheduler::run() {
    while (true) {
        int now = std::time(nullptr);

        if (this->humidity.canSend(now)) {
            this->server.dataReceive(this->humidity.sendData(), 0);
            this->humidity.aleaGenVal();
            this->humidity.lastUpdate = now;
        }

        if (this->sound.canSend(now)) {
            this->server.dataReceive(this->sound.sendData(), 1);
            this->sound.aleaGenVal();
            this->sound.lastUpdate = now;
        }

        if (this->temperature.canSend(now)) {
            this->server.dataReceive(this->temperature.sendData(), 2);
            this->temperature.aleaGenVal();
            this->temperature.lastUpdate = now;
        }

        if (this->light.canSend(now)) {
            this->server.dataReceive(this->light.sendData(), 3);
            this->light.aleaGenVal();
            this->light.lastUpdate = now;
        }

        Sleep(100);
    }
}
