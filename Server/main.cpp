
#include "Headers/Scheduler.h"

int main() {
    Humidity hum;
    Sound sound;
    Temperature temperature;
    Light light;
//    Server server;
//    server << hum.sendData();
    Scheduler scheduler;
    scheduler + hum + light + sound + temperature;
    scheduler.run();
    return 0;
}