#ifndef _light_
#define _light_

#include <iostream>
#include "sensor.h"

class Light:public Sensor{

		private : bool val_light;

		public :  void setVal(bool i){this->val_light=i;}
			  bool getVal(){return this->val_light;}
};
#endif
