#include "scheduler.h"

Scheduler::Scheduler():t(),h(),l(),s(), serv(4,true,true)//On peu aussi mettre une valeur lors la construction des capteurs
  //exemple : t(50),h(25),...
{

    this->sens.push_back(t);
    this->sens.push_back(h);
    this->sens.push_back(l);
    this->sens.push_back(s);


}
void Scheduler::transInfo(){
    this->serv.dataRcv(this->sens[0].sendData());
    this->serv.dataRcv(this->sens[1].sendData());
    this->serv.dataRcv(this->sens[2].sendData());
    this->serv.dataRcv(this->sens[3].sendData());

    this->serv.dataRcv(this->t.sendData());
    this->serv.dataRcv(this->h.sendData());
    this->serv.dataRcv(this->l.sendData());
    this->serv.dataRcv(this->s.sendData());
    cout<<"test redifinition operateur <<"<<endl;
    this->serv<<14;
    this->serv<<"14";
}
