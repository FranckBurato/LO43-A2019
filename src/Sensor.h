#ifndef DEF_SENSOR
#define DEF_SENSOR

#include "Data.h"

template<typename T>
class Sensor{
	private:
		std::string name;
	public:
		virtual T sendData() = 0;
		virtual T getData() = 0;
		virtual void setData(Data data);
		virtual void setName(std::string name);
		virtual std::strig getName();
};
#endif
