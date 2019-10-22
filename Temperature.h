class Temperature public Sensor
{
public:
	virtual Temperature(){};
	virtual Temperature(const Temperature& autre){};
	virtual Temperature(float valRcv){};
	~Temperature();
	virtual Temperature& operator=(const Temperature& autre){};
	virtual float sendData(){};
}
