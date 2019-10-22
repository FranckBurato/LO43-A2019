/**
 * @author      : pinembour (pinembour@$HOSTNAME)
 * @file        : Scheduler
 * @created     : Wednesday Oct 09, 2019 14:22:03 CEST
 */

#ifndef Scheduler_HPP

#define Scheduler_HPP
#include "server.hpp"
#include "sensor.hpp"


class Scheduler
{
    public:
        Scheduler ();
        virtual ~Scheduler ();
	Scheduler (const Scheduler& scheduler);
	Scheduler& operator= (const Scheduler& scheduler);
	template <class T> void dataRcv (const Sensor<T> sensor);
    private:
        /* private data */
	Server server;
	Sensor<float> tempS;
	Sensor<float> humiS;
	Sensor<bool> brightS;
	Sensor<int> loudS;
};

#endif /* end of include guard Scheduler_HPP */

