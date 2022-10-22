#include <iostream>
#include <utility>

class BusStation {
private:
    int stationNumber;
    std::string streetName;
    bool isLast;
public:
    BusStation() = default;
    BusStation(int stationNumber, std::string streetName, bool isLast) {
        this->stationNumber = stationNumber;
        this->streetName = *(new std::string(std::move(streetName)));
        this->isLast = isLast;
    }
    ~BusStation() = default;

    void setStationNumber(const int _stationNumber) {
        this->stationNumber = _stationNumber;
    }

    void setStreetName(const std::string& _streetName) {
        this->streetName = _streetName;
    }

    void setIsLast(const bool _isLast) {
        this->isLast = _isLast;
    }

};
