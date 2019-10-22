#ifndef SCHEDULER_H_INCLUDED
#define SCHEDULER_H_INCLUDED

class Scheduler
{
    private:

    int nbrSec; //Temps de prise de données des capteurs.

    public:
        Scheduler();
        Scheduler(int nbS);
        Scheduler& operator=(const Scheduler& nbS);
        ~Scheduler();

        void sched_run(); //Simulation des capteurs.

};

#endif // SCHEDULER_H_INCLUDED
