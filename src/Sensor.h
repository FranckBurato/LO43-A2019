#ifndef DEF_SENSOR
#define DEF_SENSOR

template<typename T>
class Sensor{
	protected:
		T data;
		std::string sensorName;
	public:
		virtual std::string sendData(){
			return "--" + this->getSensorName() + " Sensor-- Value : " + std::to_string(this->getData());
		}
		virtual T getData() const{
			return this->data;
		}
		virtual void setData(T data){
			this->data = data;
		}
		virtual std::string getSensorName() const{
			return this->sensorName;
		}
};
#endif
