#include <iostream>
#include "Scheduler.h"

using namespace std;

int main(){
	
	Scheduler scheduler(4, true, true);
	scheduler.run();
	return 0;

}
