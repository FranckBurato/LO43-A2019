#ifndef SENSOR_H
#define SENSOR_H
#include <string>
#include <ctime>
#include<random>
#include<iostream>
using namespace std;
template<class T,class string> 
class Sensor{
private:
	T val;
	string name;
public:
	Sensor();
	Sensor(string s) { name = s; }
	Sensor(const Sensor<T,string>& s);
	~Sensor() {};
	Sensor& operator=(const Sensor<T,string>& s);

	void setvalue(T x) { val = x; }
	T showvalue() { return val; }
	string sendname() {return name;}
	string sendval();

};

template<class T, class string>
inline Sensor<T, string>::Sensor()
{
	val = 0;
	name = "Sensor";
}
template<class T, class string>
inline Sensor<T, string>::Sensor(const Sensor<T, string>& s)
{
	val = s.val;
	name = s.name;
}
template<class T, class string>
Sensor<T, string>& Sensor<T, string>::operator=(const Sensor<T, string>& s)
{
	val = s.val;
	name = s.name;
	return *this;
}

template<class T, class string>
inline string Sensor<T, string>::sendval()
{
	int i = 0;
	if(this->sendname()== "temperature")
	{
		i = 1;
	}
	else
	{
		if(this->sendname() == "humdity")
		{
			i = 2;
		}
		else
		{
			if(this->sendname() == "sound")
			{
				i = 3;
			}
			else
			{
				i = 4;
			}
		}
	}
	float x;
	default_random_engine e(time(0));
	uniform_real_distribution<float> u(0, 10);
	x = u(e);
	string s;
	int p = rand() % 100;
	switch (i)
	{
	case 3:
		 s = to_string(p);
			return s;
			break;
	case 1:
		x = x * 5 - 10;
		 s = to_string(x);
		return s;
		break;
	case 2:
		x = x * 10;
		 s = to_string(x);
		return s;
		break;
	case 4:
		if (x < 2.5)
		{
			return "true";
		}
		else {
			return "false";
		}
			break;
	default:
		return "erreur";
		break;
	}
	};




#endif

