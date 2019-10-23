#ifndef DEF_SENSOR
#define DEF_SENSOR

class Sensor{
	protected:
		std::string sensorName;
	public:
		std::string getSensorName() const;
		virtual std::string sendData();
		template<typename T>
		T& generateValues(const T& max, const T& min){
			std::srand(std::time(nullptr));
			T rand = std::rand()%(max+1) + min;
			return rand;
		}
		
		template<>
		bool& generateValues(const bool& max, const bool& min){
			std::srand(std::time(nullptr));
			int rand = std::rand()%100;
			if(rand <= 50){
				return min;
			}else{
				return max;
			}
		}	
};
#endif
