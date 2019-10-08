#ifndef LO43_A2019_SENSOR_H
#define LO43_A2019_SENSOR_H

template<typename T>
class Sensor {
protected:
    T value;
public:
    Sensor();
    Sensor(Sensor& other);
    ~Sensor();
    Sensor& operator=(const Sensor&);
};

template<typename T>
Sensor<T>::Sensor() = default;

template<typename T>
Sensor<T>::Sensor(Sensor<T> &other) {
    this->value = other.value;
}

template<typename T>
Sensor<T>::~Sensor() = default;

template<typename T>
Sensor<T> &Sensor<T>::operator=(const Sensor<T>& other) {
    this->value = other.value;
    return *this;
}

#endif //LO43_A2019_SENSOR_H
