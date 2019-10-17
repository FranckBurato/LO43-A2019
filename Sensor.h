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
		virtual int aleaGenVal ()=0;		
};

#endif
