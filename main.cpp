#include <iostream>
#include "Building.h"

int main() {
    Building building(1, 100, 1000);
    std::cout << "Building cost: " << building.GetCost() << std::endl;
    building.toAge(50);
    std::cout << "Building cost: " << building.GetCost() << std::endl;
    building.toAge(50);
    std::cout << "Building cost: " << building.GetCost() << std::endl;
    building.toAge(1);
    std::cout << "Building cost: " << building.GetCost() << std::endl;
    return 0;
}
