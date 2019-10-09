#ifndef HUMIDITY_H
#define HUMIDITY_H


class Humidity: public Sensor
{
    private:
        float Hum;
    public:
        Humidity();
        Humidity(const Humidity& h);
        ~Humidity();

};

#endif // HUMIDITY_H
