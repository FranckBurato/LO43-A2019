#include <random>
#include <chrono>
using namespace std;

#include "Light.h"

Light::Light() : Sensor()
{
    this->valSense = this->aleaGenVal();
    this->delay = 3;
}

bool Light::aleaGenVal() {
    default_random_engine generator(chrono::system_clock::now().time_since_epoch().count());
    uniform_int_distribution<int> distribution(0, 1);
    this->valSense = distribution(generator);
    return (bool) this->valSense;
}
