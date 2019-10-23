#include <iostream>
#include "Scheduler.h"

using namespace std;

int main(){
	
	Scheduler scheduler(true, true);
	cout << "Begining acquisition..." << endl;
	scheduler.run();
	return 0;

}
