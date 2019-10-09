#ifndef LO43_A2019_SENSOR_H
#define LO43_A2019_SENSOR_H

template<typename T>
class Sensor {
protected:
    T valSense;
public:
    Sensor();
    Sensor(Sensor& other);
    explicit Sensor(T value);
    ~Sensor();

    T sendData();

private:
    virtual T aleaGenVal()=0;
};

template<typename T>
Sensor<T>::Sensor() = default;

template<typename T>
Sensor<T>::Sensor(Sensor<T> &other) {
    this->valSense = other.valSense;
}

template<typename T>
Sensor<T>::Sensor(T val) {
    this->valSense = val;
}

template<typename T>
Sensor<T>::~Sensor() = default;

template<typename T>
T Sensor<T>::sendData() {
    return this->valSense;
}

#endif //LO43_A2019_SENSOR_H
