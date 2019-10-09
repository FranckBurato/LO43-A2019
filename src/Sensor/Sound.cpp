#include <random>
#include <chrono>
using namespace std;

#include "Sound.h"

Sound::Sound() {
    this->valSense = this->aleaGenVal();
}

int Sound::aleaGenVal() {
    default_random_engine generator(chrono::system_clock::now().time_since_epoch().count());
    uniform_int_distribution<int> distribution(0,150);
    this->valSense = distribution(generator);
    return this->valSense;
}
