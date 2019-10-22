#include "Sensor.h"
#include <ctime>
#include<fstream>
#include<random>
Sensor::Sensor(Sensor& s) {
	this->fre = s.fre;
};
void Sensor::setfre(int val) {
	this->fre = val;
};
Sensor::~Sensor() {}
Sensor& Sensor::operator=(const Sensor& s)
{
	this->fre = s.fre;
	return *this;
}
;
string Sensor::getime() {
	time_t now = time(0);
	char* o= ctime(&now);
	string s = o;
	return s;
};
string Sensor::getfre() {
	string s;
	s = to_string(this->fre);
	return s;
};

string temperature::sendData()
{
	delay();
	string m;
	m = this->getime()+this->sensor_type + ":" +this->test()+ "°c";
	return m;
}

void temperature::record()
{
	ofstream file("sensor temperature.text", ios::app);
	if (file.is_open()) {
		file << this->sendData() << "\n";
		file.close();
	}
}
string temperature::test()
{
	default_random_engine e(time(0));
	uniform_real_distribution<double> u(-1.2, 3.5);
	double a = u(e);
	a = a * 10.000;
	
	return to_string(a);
}
string humidity::sendData()
{
	delay();
	string m;
	m = this->getime() + this->sensor_type+":" + this->test() + "%";
	return m;
}

void humidity::record()
{
	ofstream file("sensor humidity.text", ios::app);
	if (file.is_open()) {
		file << this->sendData() << "\n";
		file.close();
	}
}
string humidity::test()
{
	default_random_engine e(time(0));
	uniform_real_distribution<double> u(0, 100);
	double a = u(e);
		return to_string(a);
}
string light::sendData()
{
	delay();
	string m;
	m = this->getime() + this->sensor_type + ":" + this->test();
	return m;
}

void light::record()
{
	ofstream file("sensor light.text", ios::app);
	if (file.is_open()) {
		file << this->sendData() << "\n";
		file.close();
	}
}
string light::test()
{
	int i;
	srand(time(NULL));
	i = rand() % 10 + 1;
	string s = "true";
	string d = "false";
	if (i <= 5)
		return s;
	else
		return d;
}
;
string sound::sendData()
{
	delay();
	string m;
	m = this->getime() + this->sensor_type + ":" + this->test() + "db";
	return m;
}

void sound::record()
{
	ofstream file("sensor sound.text", ios::app);
	if (file.is_open()) {
		file << this->sendData() << "\n";
		file.close();
	}
}
string sound::test()
{
	int i;
	srand(time(NULL));
	i = rand() % 10 + 1;
	return to_string(i);

};
void Sensor::delay()
{
	time_t timep;
	time(&timep); /*获取time_t类型的当前时间*/
	//printf("%s", asctime(gmtime(&timep)));
	long int o = static_cast<long int> (time(NULL));
	long int t = static_cast<long int> (time(NULL));
	while (o != t + fre)
	{
		o = static_cast<long int> (time(NULL));
	};
};

