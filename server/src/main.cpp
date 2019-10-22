#include "scheduler.hpp"
#include <ctime>
#include <cstdlib>
#include <unistd.h>


int main(){
    srand(time(0));
    Scheduler schedul;
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
