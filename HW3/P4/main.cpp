#include <iostream>
using namespace std;


class Vehicle {
public:
    virtual void move() {}
};

class Car : public Vehicle {
public:
    void move() {
        cout << "Drive" << endl;
    }
};

class Bike : public Vehicle {
public:
    void move() {
        cout << "Ride" << endl;
    }
};

class Boat : public Vehicle {
public:
    void move() {
        cout << "Sail" << endl;
    }
};

int main() {
    cout << "20201690 한윤섭" << endl;
    Car car;
    Bike bike;
    Boat boat;

    car.move();
    bike.move();
    boat.move();

    return 0;
}