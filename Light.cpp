#include "Light.h"

int Light::sendData() {
    valSense = rand() %2;  // On veut une valeur entre 0 et 1
    return this->valSense;
};