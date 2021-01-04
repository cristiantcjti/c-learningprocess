#include <iostream>
#include "Car.h"

using namespace std;

int main() {
    Car* car1 = new Car(1);
    Car* car2 = new Car(2);
    Car* car3 = new Car(3);

    car1->Print();
    car2->Print();
    car3->Print();
    return 0;
}
