#ifndef SCHEDULER_H
#define SCHEDULER_H


class Scheduler
{
public:
    Scheduler();
private :
    Server s;
    Temperature T;
    Humidity h;
    Light l;
    Sound s;
};

#endif // SCHEDULER_H
