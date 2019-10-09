#include <sstream>
#include <winbase.h>
#include "Scheduler.h"

Scheduler::Scheduler() :
           server(), humidity(), sound()
{}

void Scheduler::run() {
    for (int i=0; i<100; ++i) {
        if (this->server.consoleActivation) {
            Server::consoleWrite(this->humidity.sendData());
        } if (this->server.logActivation) {
            std::stringstream ss;
            ss << this->humidity.sendData();
            Server::fileWrite(ss.str(), 0);
        } this->humidity.aleaGenVal();

        if (this->server.consoleActivation) {
            Server::consoleWrite(this->sound.sendData());
        } if (this->server.logActivation) {
            std::stringstream ss;
            ss << this->sound.sendData();
            Server::fileWrite(ss.str(), 1);
        } this->sound.aleaGenVal();

        Sleep(1000);
    }
}
