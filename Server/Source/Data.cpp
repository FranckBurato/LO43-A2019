//
// Created by Alomb on 19/10/2019.
//

#include "Header/Data.h"

Data::Data(): data(), logPath() {}

Data::Data(const Data &autre) : data(autre.data), logPath(autre.logPath) {}

Data::Data(const std::string& nData, std::string &nLogPath) : data(nData), logPath(nLogPath) {}

Data::~Data() {}

Data &Data::operator=(const Data &autre) {
    this->data = autre.data;
    this->logPath = autre.logPath;
    return *this;
}
