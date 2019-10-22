#ifndef DEF_SENSOR
#define DEF_SENSOR

template<typename T>
class Sensor{
	private:
		T data;
		std::string sensorName;
		std::string formatedData;
	public:
		virtual std::string sendData();
		virtual T getData();
		virtual void setData(T data);
};
#endif
