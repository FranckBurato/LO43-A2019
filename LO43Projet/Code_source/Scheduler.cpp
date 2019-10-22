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
        cout << "Démarrage de serveurs" << endl << endl;
        for(int nbServeurs = 1;nbServeurs <= 20;++nbServeurs){
            cout << "Serveur " << nbServeurs << ":" << endl;
            getData();
            cout << endl;
        }
    }
}

    
void Scheduler::getData(){//recevoir les datas de capteurs
        sv.dataRcv(t.getTypSsr(), t.sendData());
        t.NewValue();
        sleep((rand()%(3)) + 0);
        sv.dataRcv(h.getTypSsr(), h.sendData());
        h.NewValue();
        sleep((rand()%(3)) + 0);
        sv.dataRcv(l.getTypSsr(), l.sendData());
        l.NewValue();
        sleep((rand()%(3)) + 0);
        sv.dataRcv(s.getTypSsr(), s.sendData());
        s.NewValue();
        sleep((rand()%(3)) + 0);
}


