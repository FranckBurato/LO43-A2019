#ifndef DEF_SENSOR
#define DEF_SENSOR

template<typename T>
class Sensor{
	protected:
		std::string sensorName;
		std::string formatedData;
	public:
		virtual std::string sendData();
		virtual T getData();
		virtual void setData(T data);
		virtual std::string getSensorName() const;
};
#endif
