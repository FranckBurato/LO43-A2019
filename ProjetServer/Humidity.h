#ifndef DEF_HUMIDITY
#define DEF_HUMIDITY

#include "Sensor.h"

class HumiditySensor : public Sensor
{
     private:
        //Les attributs de Sensor sont héritées
     public:
        HumiditySensor();
        HumiditySensor(HumiditySensor &);
        HumiditySensor &operator=(const HumiditySensor &);
        ~HumiditySensor(); //Les methodes de Sensor sont héritées
        
        int aleaGenVal();
};

#endif
