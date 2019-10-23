#ifndef LIGHT_H
#define LIGHT_H
#include "Sensor.h"

class Light : public Sensor<bool>
{                                       //Light est la classe dérivée de la classe Sensor
    public:

        Light():Sensor<bool>(){};
        ~Light();

        bool aleaGenVal(int capteur);
};

#endif // LIGHT_H
