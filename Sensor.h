#ifndef DEF_SENSOR
#define DEF_SENSOR

#include <iostream>
using namespace std;


class Sensor
{
	public :
		Sensor();
		Sensor(const Sensor&);
		virtual ~Sensor();
		virtual string sendData();
	private :
		virtual string aleaGenVal ()=0;		
};

#endif
