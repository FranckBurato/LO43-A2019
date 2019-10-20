//
//  Scheduler.cpp
//  lo43tp
//
//  Created by 任怡桦 on 2019/10/17.
//  Copyright © 2019年 renyihua. All rights reserved.
//

#include <iostream>
#include <unistd.h>
#include "Scheduler.h"
using namespace std;

Scheduler::Scheduler():t(),h(),l(),s(),
sv(4,true,true){
    {
        cout << "Démarrage de serveur" << endl << endl;
        for(int nbServeurs = 1;nbServeurs <= 20;++nbServeurs){
            cout << "Serveur " << nbServeurs << ":" << endl;
            getData();
            cout << endl;
            sleep((rand()%(4)) + 2);
        }
    }
}
    
void Scheduler::getData(){//recevoir les datas de capteurs
        sv.dataRcv(t.getTypSsr(), t.sendData());
        t.NewValue();
        sv.dataRcv(h.getTypSsr(), h.sendData());
        h.NewValue();
        sv.dataRcv(l.getTypSsr(), l.sendData());
        l.NewValue();
        sv.dataRcv(s.getTypSsr(), s.sendData());
        s.NewValue();
    }



