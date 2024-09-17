#include "Building.h"
#include <iostream>


Building::Building(int const id, int const maxAge, int const initialCost)
    : Id(id), MaxAge(maxAge), InitialCost(initialCost), CurrentAge(0) {}

void Building::Destroy() const {
    std::cout << "Building " << Id << " destroyed" << std::endl;
}

int Building::GetCost() const {
    int const res = InitialCost - (InitialCost * CurrentAge / MaxAge);
    if (res < 0) {
        return 0;
    }
    return res;
}

void Building::toAge(int const years) {
    CurrentAge += years;
    if (CurrentAge > MaxAge) {
        Destroy();
    }
}
