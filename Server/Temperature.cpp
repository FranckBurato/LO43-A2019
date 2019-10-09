//
// Created by Alomb on 09/10/2019.
//

#include <random>
#include <chrono>
#include "Temperature.h"

void Temperature::aleaGenVal() {
    std::default_random_engine generator(std::chrono::system_clock::now().time_since_epoch().count());
    std::uniform_real_distribution<float> distribution(-20,40);
    valSense = distribution(generator);
}
