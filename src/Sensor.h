#ifndef DEF_SENSOR
#define DEF_SENSOR

template<typename T>
class Sensor{
	private:
		std::string sensorName;
		std::string formatedData;
	public:
		virtual std::string sendData() = 0;
		virtual T getData() = 0;
		virtual void setData(T data) = 0;
		virtual std::string getSensorName() const;
};
#endif
