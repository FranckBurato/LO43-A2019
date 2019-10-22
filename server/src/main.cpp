#include "scheduler.hpp"
#include <ctime>
#include <cstdlib>
#include <unistd.h>


int main(){
    srand(time(0));
    int console = 1, file = 1;
    Scheduler schedul(console, file);
    while(1){
        schedul.dataRcv(schedul.tempS);
        usleep(1000000);
        schedul.dataRcv(schedul.brightS);
        usleep(1000000);
        schedul.dataRcv(schedul.loudS);
        usleep(1000000);
        schedul.dataRcv(schedul.humiS);
        usleep(1000000);
    }
    return 0;
}
