#include <iostream>

using namespace std;

class Sensor{

    private:
        float temperature, humidity;
        int sound;
        bool light;

    public:
        //forme canonique
        Sensor();
        Sensor(float temperature, float humidity, int sound, bool light);
        Sensor(const Sensor&);
        ~Sensor();
        Sensor& operator=(const Sensor&);


};