#include <random>
#include <chrono>
using namespace std;

#include "Humidity.h"

Humidity::Humidity() : Sensor()
{
    this->valSense = this->aleaGenVal();
    this->delay = 2;
}

float Humidity::aleaGenVal() {
    default_random_engine generator(chrono::system_clock::now().time_since_epoch().count());
    uniform_real_distribution<float> distribution(0,100);
    this->valSense = distribution(generator);
    return this->valSense;
}
