#ifndef _sound_
#define _sound_

#include <iostream>
#include "sensor.h"

class Sound:public Sensor{

		private :int val_sound;

		public : void setVal(int i){this->val_sound=i;}
			 int getVal(){return this->val_sound;}

};

#endif
