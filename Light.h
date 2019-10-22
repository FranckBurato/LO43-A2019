class Light public Sensor
{
public:
	virtual Light(){};
	virtual Light(const Light& autre){};
	virtual Light(bool valRcv){};
	~Light();
	virtual Light& operator=(const Light& autre){};
	virtual bool sendData(){};
}

