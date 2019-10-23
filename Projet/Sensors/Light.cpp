//
// Created by Antoine on 22/10/2019.
//

#include "Light.h"
#include <string>
#include <iostream>

Light::Light() {
    this->id = 3;
    this->path = "../Logs/light.txt";
    this->type = "Light";
}
Light::Light(const Light &light){}
Light& Light::operator=(const Light &light) {
    this->path = light.path;
    this->id = light.id;
    this->type = light.type;
    return *this;
}
Light::~Light() {}

std::string Light::getValue() {
    return std::to_string(this->generateValue(0,1));
}