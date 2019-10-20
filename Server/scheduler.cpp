#include "scheduler.h"


Scheduler::Scheduler()//:t(50),h(40),l(256),s(27),serv(4,true,true) //version avec int uniquement
//t(),h(),l(),s(), serv(4,true,true)//ici on utilise pas les constructeurs par défaut car il utilisent alenGenVal qui doit être rédefinie car on utilise les templates pour les différnets capteurs
  :t(50.2),h(2.4),l(true),s(20), serv(4,true,true)//dans cette version on utilise le constructeur en passent un valeurs pour tester la transformation en template de sensor
{

    
    this->sens.push_back(sensor);//si on veut utiliser un vecteur de sensor
	

}
void Scheduler::transInfo(){

    
	 int NUM_SECONDS = 3;
    double time_counter = 0;
    clock_t now_time = clock();
    clock_t last_time = now_time;
	cout<<" veuillez preciser en secondes (int) l'intervalle de temps entre chaque mesure en seconde	 : "<<endl;
	cin>>NUM_SECONDS;
    cout << "Le serveur demarre, entrez ctrl-c pour l'arreter' " << endl << endl;
    
    while(true){
        now_time = clock();

        time_counter += (double)(now_time - last_time);

        last_time = now_time;

        if(time_counter > (double)(NUM_SECONDS * CLOCKS_PER_SEC))//clokcs_per_sec et définie dans time.h
        { 
            time_counter -= (double)(NUM_SECONDS * CLOCKS_PER_SEC);
            
            
            this->serv.dataRcv(this->sens[0].sendData());//si on veut utiliser un vecteur de sensor
    		
            this->serv.dataRcv(this->t.sendData());//ici rajouter attrivue nume sens?
		    this->serv.dataRcv(this->h.sendData());
		    this->serv.dataRcv(this->l.sendData());
		    this->serv.dataRcv(this->s.sendData());
		    cout<<"test redifinition operateur <<"<<endl;
		    this->serv<<14;
		    this->serv<<14.33;
		    cout<<"test redifinition operateur << dans fichier log"<<endl;
           	this->t<<"15.2";
           	this->h<<"20.87";
           	this->l<<"true";
           	this->s<<"20";
			this->sens[0]<<"10";


            cout << endl << endl;
        }
    }
    
    
    
    
    //(string)"1"<<this->serv<<25;
}


