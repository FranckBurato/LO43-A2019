#ifndef LIGHT_H
#define LIGHT_H


class Light: public Sensor
{
    private:
        bool L;
    public:
        Light();
        virtual ~Light();

};

#endif // LIGHT_H
