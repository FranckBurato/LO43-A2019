#include "scheduler.h"
//#include <chrono>


void scheduler::start(){

int i=0;

cout<<"Combien de fois souhaitez vous obtenir les inforamations de chaque capteur ?"<<endl;
cin>>i;

Server server;
Sound son;
Temperature temp;
Humidity humidite;
Light lumiere;

for(int j=0;j<i;j++)
{

        son.setVal(son.aleaGenVal<int>(1));
	server.setData(son.sendData("Val_SON:",son.getVal()));
	server.fileWrite(server.getData());
	server.consoleWrite(server);
	sleep(1);								// Obliger de mettre 1 seconde entre les appels a aleaGenVAl : le srand() a besoin de temps pour se réinitialiser
										// en dessous de 1 secondes il "plante" et ne fait que génerer les mêmes suites de nombres
	temp.setVal(temp.aleaGenVal<float>(0));					// Ainsi je n'ai pu paramettrer la contraite de récuper les informations à des temps différents à cause de cela...
	server.setData(temp.sendData("Val_TEMPERATURE:",temp.getVal()));	
	server.fileWrite(server.getData());					
	server.consoleWrite(server);
	sleep(1);

	humidite.setVal(humidite.aleaGenVal<float>(0));
	server.setData(humidite.sendData("Val_HUMIDITE:",humidite.getVal()));
	server.fileWrite(server.getData());
	server.consoleWrite(server);
	sleep(1);

	lumiere.setVal(lumiere.aleaGenVal<bool>(2));
	server.setData(lumiere.sendData("Val_LUMIERE:",lumiere.getVal()));
	server.fileWrite(server.getData());
	server.consoleWrite(server);
	sleep(1);
}







}
