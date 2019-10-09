//
// Created by Alomb on 09/10/2019.
//

#include "Humidity.h"
#include <random>
#include <chrono>

void Humidity::aleaGenVal() {
    std::default_random_engine generator(std::chrono::system_clock::now().time_since_epoch().count());
    std::uniform_real_distribution<float> distribution(0,100);
    valSense = distribution(generator);
}
