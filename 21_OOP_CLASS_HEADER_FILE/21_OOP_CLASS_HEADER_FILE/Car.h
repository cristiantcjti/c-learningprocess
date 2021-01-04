//#pragma once

#ifndef CAR_H_INCLUDED
#define CAR_H_INCLUDED
#include <iostream>
#include <string>

class Car {
public:
    int tp;
    int velMax;
    std::string Type;
    CarType( int tp);
    void Print();
private:

};

Car::CarType(int tp) {
    if (tp == 1) {
        velMax = 380;
        Type = "Sport";
    }
    else if (tp == 2) {
        velMax = 180;
        Type = "Classic";
    }
    else if (tp == 3) {
        velMax = 100;
        Type = "Old";
    }
}

void Car::Print() {
    std::cout << std::endl;
    std::cout << "Model......: " << Type << std::endl;
    std::cout << "Max Velocity: " << velMax << std::endl;
    std::cout << std::endl;
}
#endif
