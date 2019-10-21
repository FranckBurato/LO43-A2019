/**
 * @author      : pinembour (pinembour@$HOSTNAME)
 * @file        : Sensor
 * @created     : Wednesday Oct 09, 2019 13:24:59 CEST
 */

#ifndef Sensor_HPP

#define Sensor_HPP
#include <string>
#include <iostream>

template <class T> class Sensor
{
    public:
        Sensor ();
        virtual ~Sensor ();
	Sensor(const Sensor& sensor);
        Sensor(T valSense);
	std::string sendData();
	aleaGen();
	Sensor& operator=(const Sensor& sensor);
	std::ostream& operator<<(std::ostream& os, const Sensor& sensor);
    protected:
        /* private data */
	T valSense;
	std::string id;
};

#endif /* end of include guard Sensor_HPP */

