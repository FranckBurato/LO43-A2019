//
// Created by Alomb on 09/10/2019.
//

#include "Light.h"
#include <random>
#include <chrono>

void Light::aleaGenVal() {
    std::default_random_engine generator(std::chrono::system_clock::now().time_since_epoch().count());
    std::bernoulli_distribution distribution;
    valSense = distribution(generator);
}
