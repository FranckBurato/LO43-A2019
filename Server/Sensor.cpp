#include "Sensor.h"

Sensor::Sensor(): temperature(), humidity(),
                    sound(), light(){}

Sensor::Sensor(float temperature, float humidity, 
int sound, bool light){
    this->temperature = temperature;
    this->humidity = humidity;
    this->sound = sound;
    this->light = light;
}

Sensor::Sensor(const Sensor& s){
    this->temperature = s.temperature;
    this->humidity = s.humidity;
    this->sound = s.sound;
    this->light = s.light;
}
Sensor::~Sensor(){}

Sensor& Sensor::operator=(const Sensor& s){


    return *this;
}
