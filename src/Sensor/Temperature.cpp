#include <random>
#include <chrono>
using namespace std;

#include "Temperature.h"

Temperature::Temperature() {
    this->valSense = this->aleaGenVal();
}

float Temperature::aleaGenVal() {
    default_random_engine generator(chrono::system_clock::now().time_since_epoch().count());
    uniform_real_distribution<float> distribution(-20, 50);
    this->valSense = distribution(generator);
    return this->valSense;
}
