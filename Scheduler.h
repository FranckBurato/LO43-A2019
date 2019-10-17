#include "Server.h"
#include "Temperature.h"
#include "Humidity.h"
#include "Sound.h"
#include "Light.h"

class Scheduler 
{
	public :
		Scheduler();
		Scheduler(const Scheduler&);
		virtual ~Scheduler();
		void activateSensor();
		void activateSensor(int,int,int,int,int);
	private :
		Server server;
		Temperature temperature;
		Sound sound;
		Humidity humidity;
		Light light;
};
	
