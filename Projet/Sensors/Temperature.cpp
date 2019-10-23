//
// Created by Antoine on 22/10/2019.
//

#include "Temperature.h"
#include <string>
#include <iostream>

Temperature::Temperature() {
    this->id = 1;
    this->path = "../Logs/temperature.txt";
    this->type = "Temperature";
}
Temperature::Temperature(const Temperature &temperature) {}
Temperature& Temperature::operator=(const Temperature &temperature) {
    this->path = temperature.path;
    this->id = temperature.id;
    this->type = temperature.type;
    return *this;
}
Temperature::~Temperature() {}

std::string Temperature::getValue() {
    return std::to_string(this->generateValue(0,100));
}