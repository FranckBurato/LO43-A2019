#ifndef TEMPERATURE_H
#define TEMPERATURE_H


class Temperature: public Sensor
{
    private:
        float T;
    public:
        Temperature();
        virtual ~Temperature();

};

#endif // TEMPERATURE_H
