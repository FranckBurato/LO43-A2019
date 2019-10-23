#ifndef SENSOR_H
#define SENSOR_H

//ON UTILISE UN TEMPLATE DATA POUR FLOAT / INT / BOOL
template <class Data> class Sensor
{
private:
	Data dataSens;
//ON AJOUTE VIRTUAL AU METHODES POUR QU'ELLES PUISSENT ETRE REUTILISEES
	virtual Data aleaGenVal (int nType){};
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
//METHODE POUR RECUPERER UN DATA ET L'ENVOYER AU SCHEDULER
	virtual Data sendData()
	{
		
	};
};

#endif
