/**
 * @author      : pinembour (pinembour@$HOSTNAME)
 * @file        : Sensor
 * @created     : Wednesday Oct 09, 2019 13:24:59 CEST
 */

#ifndef Sensor_HPP

#define Sensor_HPP


template <class T> class Sensor
{
    public:
	friend class Scheduler;
        Sensor ();
        virtual ~Sensor ();
	Sensor(const Sensor& sensor);
        Sensor(T valSense);
	T sendData();
	aleaGen();
	Sensor& operator=(const Sensor& sensor);
    protected:
        /* private data */
	T valSense;
};

#endif /* end of include guard Sensor_HPP */

