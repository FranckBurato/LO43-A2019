#ifndef LO43_A2019_SENSOR_H
#define LO43_A2019_SENSOR_H

template<typename T>
class Sensor {
protected:
    T valSense;
    int delay{};
    int lastUpdate{};

    virtual T aleaGenVal() = 0;

    friend class Scheduler;

public:
    Sensor();

    Sensor(const Sensor &);

    Sensor(T, int, int);

    ~Sensor();

    bool canSend(int);

    T sendData();
};

template<typename T>
Sensor<T>::Sensor() {
    this->valSense = 0;
    this->delay = 1;
    this->lastUpdate = 0;
};

template<typename T>
Sensor<T>::Sensor(const Sensor<T> &other) {
    this->valSense = other.valSense;
    this->delay = other.delay;
    this->lastUpdate = other.lastUpdate;
}

template<typename T>
Sensor<T>::Sensor(T val, int delay, int lastUpdate) {
    this->valSense = val;
    this->delay = delay;
    this->lastUpdate = lastUpdate;
}

template<typename T>
Sensor<T>::~Sensor() = default;

template<typename T>
bool Sensor<T>::canSend(int now) {
    return now - this->lastUpdate >= this->delay;
}

template<typename T>
T Sensor<T>::sendData() {
    return this->valSense;
}

#endif //LO43_A2019_SENSOR_H
