#ifndef MY_H_FILLE
#define  MY_H_FILLE
#include <iostream>
#include <string>
using namespace std;
class Sensor {
private:
	int fre;//fréquence
public:
	//la forme canonique de coplien
	Sensor() :fre(0){};
	Sensor(Sensor& s);
	~Sensor();
	Sensor& operator=(const Sensor& s);



	void setfre(int val);				//pour changer la fréquence
	string getfre();				//pour obtenir la valeur de fre
	virtual int gett() = 0;				//fonction virtuelle
	virtual string sendData()=0;			//fonction virtuelle
	virtual void record()=0;			//fonction virtuelle
	string getime();				//pour obtenir le temps
	void delay();					//modélisation du retardement
};

class temperature :public Sensor {
private:
	string sensor_type = "temperature";
	float val_t;
public:
	temperature() :Sensor() { val_t = 0; };
	temperature(temperature& s) :Sensor(s) { val_t = s.val_t; };
	temperature(float val) :Sensor(){ val_t = val; };
	string sendData();				//pour prodire un donnée (string) qui est transmis à le server
	void record();					//il y a un fichier  temperature pour enregistrer des données
	string test();					//pour créer un nombre aléatoire 
	int gett() { return 1; }        		//renvoyer un entier relatif pour déterminer le type de sensor
};
class humidity :public Sensor {
private:
	float val_h;
	string sensor_type = " humidity";
public:
	humidity() :Sensor() { val_h = 0; };
	humidity(humidity& s) :Sensor(s) { val_h = s.val_h; };
	humidity(float val) :Sensor() { val_h = val; };
	string sendData();				//pour prodire un donnée (string) qui est transmis à le server
	void record();					// il y a un fichier  humidity pour enregistrer des données
	string test();					//pour créer un nombre aléatoire ,puis faire un encapsulation et devenir un donnée (string) qui est transmis à le server
	int gett() { return 2; }			//renvoyer un entier relatif pour déterminer le type de sensor
};
class sound :public Sensor {
private:
	int val_s;
	string sensor_type = "sound";
public:
	sound() :Sensor() { val_s = 0; };
	sound(sound& s) :Sensor(s) { val_s = s.val_s; };
	sound(int val) :Sensor() { val_s = val; };
	string sendData();			//pour prodire un donnée (string) qui est transmis à le server
	void record();				// il y a un fichier  sound pour enregistrer des données
	string test();				//pour créer un nombre aléatoire ,puis faire un encapsulation et devenir un donnée (string) qui est transmis à le server
	int gett() { return 3; }		//renvoyer un entier relatif pour déterminer le type de sensor
};
class light :public Sensor {
private:
	bool val_l;
	string sensor_type = "light";
public:
	light() :Sensor() { val_l = false; };
	light(light& s) :Sensor(s) { val_l = s.val_l; };
	light(bool val) :Sensor() { val_l = val; };
	string sendData();			//pour prodire un donnée (string) qui est transmis à le server
	void record();				// il y a un fichier  light pour enregistrer des données
	string test();				//pour créer un nombre aléatoire ,puis faire un encapsulation et devenir un donnée (string) qui est transmis à le server
	int gett() { return 4; }		//renvoyer un entier relatif pour déterminer le type de sensor
};
#endif
