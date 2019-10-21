#ifndef SENSOR_H
#define SENSOR_H
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string>
#include <typeinfo>

using namespace std;

template <class T>
class Sensor
{
public:
    Sensor();
    Sensor(const Sensor & sensor_p );
    Sensor(T valRcv);
    Sensor& operator=(const Sensor& sensor_p);
    ~Sensor(){};
    virtual int getSensNumb()const;
    T sendData() const;
    void operator<<(string dataString); // une autre maniere de faire le bouleau de la redifinition de l'opérateur <<(string,int)  

private:
    T valSense;
    T aleaGenVal();
    
protected:    
    int numSens;//le but ici est de tester protected à travers les classe qui hérite de sensor (on pourrait renovyer directement le int correspond à travers la fonction
    //int getSensNumb()const au lieu de l'enregistrer dans int numSens) 
};




template <class T>
Sensor<T>::Sensor():valSense()
{
    valSense = aleaGenVal();
    this->numSens = 0;
    cout<<endl<<"constructeur utilisant aleaGenVal"<<endl<<"test num sens : "<<this->numSens<<endl<<endl;
}

template <class T>
Sensor<T>::Sensor(const Sensor & sensor_p){
    this->valSense=sensor_p.valSense;
    this->numSens=sensor_p.numSens;
}

template <class T>
Sensor<T>::Sensor(T valRcv):valSense(valRcv){
    this->numSens = 0;
    cout<<"test num sens : "<<this->numSens<<endl;
}

template <class T>
Sensor<T>& Sensor<T>::operator=(const Sensor& sensor_p){
	this->valSense=sensor_p.valSense;
    this->numSens=sensor_p.numSens;
    return *this;
}


template <class T>
T Sensor<T>::aleaGenVal(){
	//if(std::is_same<decltype(this->valSense), bool>::value){
    //    return rand() % 2;
	//}else if(std::is_same<decltype(this->valSense), float>::value){
	//	return  r = (rand() / (float)RAND_MAX * 19) + 1;
	//}else{
    	return (rand() % 100);		
	//}

}

template <class T>
int Sensor<T>::getSensNumb()const{
    return this->numSens;
}

template <class T>
T Sensor<T>::sendData()const{
    return this->valSense;
}

template <class T>
void Sensor<T>::operator<<(string dataString){
    ofstream mylog;
    if(this->getSensNumb()==1){
    	cout<< "ecriture dans le fichier log temperature "<<endl<<endl;
    	mylog.open("log/log_file_capteur_temperature.txt", ios::out | ios::app );
	    mylog << dataString <<"\n\n";
	    mylog.close();	
	}else if (this->getSensNumb()==2){
    	cout<< "ecriture dans le fichier log humidity "<<endl<<endl;
		mylog.open("log/log_file_capteur_humidity.txt", ios::out | ios::app );
	    mylog << dataString <<"\n\n";
	    mylog.close();	
	}else if (this->getSensNumb()==3){
    	cout<< "ecriture dans le fichier log light "<<endl<<endl;		
		mylog.open("log/log_file_capteur_light.txt", ios::out | ios::app );
	    mylog << dataString <<"\n\n";
	    mylog.close();	
	}else if (this->getSensNumb()==4){
    	cout<< "ecriture dans le fichier log sound "<<endl<<endl;			
		mylog.open("log/log_file_capteur_sound.txt", ios::out | ios::app );
	    mylog << dataString <<"\n\n";
	    mylog.close();	
	}else{
    	cout<< "ecriture dans le fichier log capteur "<<endl<<endl;		
	    mylog.open("log/log_file_capteur.txt", ios::out | ios::app );
	    mylog << dataString <<"\n\n";
	    mylog.close();
	}
}


#endif // SENSOR_H
