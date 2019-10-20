#ifndef DEF_SENSOR
#define DEF_SENSOR

#include "Data.h"

template<typename T>
class Sensor{
	private:
		std::string name;
	public:
		virtual T sendData() = 0;
		virtual T getData();
		virtual void setData(Data data);
		void setName(std::string name);
		std::string getName();
};
#endif
