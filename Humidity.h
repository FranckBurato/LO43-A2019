#ifndef DEF_HUMIDITY
#define DEF_HUMIDITY
#include "Sensor.h"

class HumiditySensor : public Sensor
{
     private:
        int inf = 0;
        int sup = 100;//Les attributs de Sensor sont héritées
     public:
        //Les methodes de Sensor sont héritées

};

#endif
