#ifndef DEF_SENSOR
#define DEF_SENSOR

class Sensor{
	protected:
		std::string sensorName;
	public:
		std::string getSensorName() const;
		virtual std::string sendData();
		template<typename T>
		T generateValues(T max, T min){
			std::srand(time(nullptr));
			T randT = std::rand() * max + min;
			return randT;
		}
};			
#endif
