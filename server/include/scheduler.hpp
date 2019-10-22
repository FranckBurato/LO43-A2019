/**
 * @author      : pinembour (pinembour@$HOSTNAME)
 * @file        : Scheduler
 * @created     : Wednesday Oct 09, 2019 14:22:03 CEST
 */

#ifndef Scheduler_HPP

#define Scheduler_HPP
#include "server.hpp"
#include "sensor.hpp"
#include <vector>

class Scheduler
{
    private:
        /* private data */
        Server server;
    public:
        /*Possible improvement : Use a `vector<Sensor> sensors` to store the sensors, so that we can add and remove them at run time. This however would mean to add an `int position` to the sensor, or to give them a different name each so that we can find then at a later time
        */    

        //Sensors are public because we need to access then in the main to choose which we want the date from
        Sensor<float> tempS;
        Sensor<float> humiS;
        Sensor<bool> brightS;
        Sensor<int> loudS;

        //Coplien form
        Scheduler ();
        virtual ~Scheduler ();
        Scheduler (const Scheduler& scheduler);
        Scheduler& operator=(const Scheduler& scheduler);

        //dataRcv is a template function that can recover data from any type of sensor
        template <class T> void dataRcv ( Sensor<T> sensor) const;

};

template <class T> void Scheduler::dataRcv( Sensor<T> sens) const{
    sens.aleaGen();
    server.dataRcv(sens.sendData());
}

#endif /* end of include guard Scheduler_HPP */

