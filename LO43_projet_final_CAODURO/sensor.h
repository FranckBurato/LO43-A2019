#ifndef _sensor_
#define _sensor_

#include <iostream>
#include <string>
#include <sstream>
#include <unistd.h>
#define MAX 40
#define MIN 0
#define N 100
#define X 100000000 //(Utiliser pour supprimer le e⁸ du float)

using namespace std;

class Sensor{

	public:


	    template <typename T> T aleaGenVal(const int x){
	
   		 srand(time(NULL));
   		 switch(x)
   			 {
   			 case 0 :  return rand()/(float)N  * ((MAX-MIN) + MIN)/X;   //retourne un float entre 0 et 40
       			 break;
   			 case 1 :  return rand()%N;                              //retourne un int entre 0 et 100
   			 break;
   			 case 2 :  int test=rand()%N;if(test>N/2){return true;}else{return false;}  //retourne true ou false
       			 break;
    			}
		}		
	
	    template <typename T> string sendData(const string type,const T val){
		string result;
		std::stringstream sstm;
		sstm << type << val;
		result = sstm.str();
		return result;
	    }


		Sensor();
		Sensor(const Sensor &);
		~Sensor();

};


#endif
