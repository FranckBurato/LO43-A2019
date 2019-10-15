#include <iostream>
#include <fstream>
#include <string>
#include "Scheduler.h"


int main(){
    srand(time(NULL));
    Scheduler scheduler;
    // Get data va nous lancer notre server, et va afficher les différentes informations
    scheduler.getData();
    return 0;

}