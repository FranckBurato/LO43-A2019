#ifndef _temperature_
#define _temperature_

#include <iostream>
#include "sensor.h"

class Temperature:public Sensor{

		private : float val_temp;

		public : void setVal(float i){this->val_temp=i;}
			 float getVal(){return this->val_temp;}
};

#endif
