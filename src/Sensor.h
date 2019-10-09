#ifndef DEF_SENSOR
#define DEF_SENSOR

#include "Data.h"

class Sensor{
	private:
		std::string name;
		Data data;
	public:
		virtual std::variant<float, int, bool> sendData() = 0;
		std::string getName();
		Data getData();
		void setData(Data data);
		void setName(std::string name);
};
#endif
