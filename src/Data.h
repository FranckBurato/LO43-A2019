#ifndef DEF_DATA
#define DEF_DATA

#include <string>

class Data{
	private:
		std::string sensorName;
		std::string formatedData;
		std::string dataDate;
		std::variant<float, int, bool> data;
	public:
		Data();
		Data(std::string sensorName);
		Data(const Data& data);
		~Data();
		Data& operator=(const Data& data);
		std::string getSensorData();
		std::string getSensorName();
		void setSensorName(std::string sensorName);
};
