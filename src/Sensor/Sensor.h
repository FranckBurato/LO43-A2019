#ifndef LO43_A2019_SENSOR_H
#define LO43_A2019_SENSOR_H

#include <sstream>
#include <string>

template<typename T>
class Sensor {
protected:
    T value;
    std::string name;
public:
    Sensor();
    Sensor(Sensor& other);
    ~Sensor();
    Sensor& operator=(const Sensor&);

    std::string toString();
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

template<typename T>
std::string Sensor<T>::toString() {
    std::stringstream ss;
    ss << this->name << " : " << this->value;
    return ss.str();
}

#endif //LO43_A2019_SENSOR_H
