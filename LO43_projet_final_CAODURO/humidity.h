#ifndef _humidity_
#define _humidity_

#include <iostream>
#include "sensor.h"

class Humidity:public Sensor{

		private : float val_humidity;

		public : void setVal(float i){this->val_humidity=i;}
			 float getVal(){return this->val_humidity;}

};

#endif
