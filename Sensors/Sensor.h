#ifndef SENSOR_H
#define SENSOR_H

// typename
template <class T> class Sensor {
	public:
		Sensor();
		Sensor(const Sensor &sensor);
		Sensor(T valRcv);
		~Sensor();
		T sendData();
	private:
		T aleaGenVal();
};

#endif // SENSOR_H
