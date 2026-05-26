#ifndef FUEL_LEVEL_CRITICAL_H
#define FUEL_LEVEL_CRITICAL_H

#include <stdexcept>
#include <string>
using namespace std;

class FuelLevelCriticalException : public runtime_error {
    public:
        FuelLevelCriticalException() : runtime_error("Fuel Level Critical!") {}
        FuelLevelCriticalException(const string& message) : runtime_error(message) {}
};

#endif