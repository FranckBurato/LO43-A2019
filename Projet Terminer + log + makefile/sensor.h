#ifndef SENSOR_H
#define SENSOR_H


class sensor
{
    private:

    public:
        sensor();
        virtual ~sensor();
        sensor(const sensor& other);
        sensor& operator=(const sensor& other);
        float aleaGenValue(int);
};

#endif // SENSOR_H