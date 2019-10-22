#ifndef SENSOR_H
#define SENSOR_H

template <class Data> class Sensor
{
private:
	int dataSens;
	virtual Data aleaGenVal (void){};
public:
	virtual Sensor()
	{
		dataSens();
	};
	virtual Sensor(const Sensor& autre)
	{
		this->Sensor=autre.Sensor;
	};
	virtual Sensor(Data valRcv)
	{
		this->Sensor.dataSens=valRcv;
	};
	~Sensor();
	virtual Sensor& operator=(const Sensor& autre)
	{
		this->Sensor.dataSens=autre.dataSens;
		return *this;
	};
	virtual int sendData()
	{
	
	};
};

#endif
