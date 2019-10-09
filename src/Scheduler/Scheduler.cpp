#include <sstream>
#include <winbase.h>
#include "Scheduler.h"

Scheduler::Scheduler() :
           server(), humidity(), sound(), temperature(), light()
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

        if (this->server.consoleActivation) {
            Server::consoleWrite(this->temperature.sendData());
        } if (this->server.logActivation) {
            std::stringstream ss;
            ss << this->temperature.sendData();
            Server::fileWrite(ss.str(), 2);
        } this->temperature.aleaGenVal();

        if (this->server.consoleActivation) {
            Server::consoleWrite(this->light.sendData());
        } if (this->server.logActivation) {
            std::stringstream ss;
            ss << this->light.sendData();
            Server::fileWrite(ss.str(), 3);
        } this->light.aleaGenVal();

        Sleep(1000);
        system("cls");
    }
}
