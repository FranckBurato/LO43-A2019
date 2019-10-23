//
// Created by Antoine on 22/10/2019.
//

#include "Humidity.h"
#include <string>
#include <iostream>

Humidity::Humidity() {
    this->id = 2;
    this->path = "../Logs/humidity.txt";
    this->type = "Humidity";
}
Humidity::Humidity(const Humidity &humidity){}
Humidity& Humidity::operator=(const Humidity &humidity) {
    this->path = humidity.path;
    this->id = humidity.id;
    this->type = humidity.type;
    return *this;
}
Humidity::~Humidity() {}

std::string Humidity::getValue() {
    return std::to_string(this->generateValue(10,60));
}