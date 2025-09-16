//EXPERIMENT 14
//Name:-Palak Soni
//Class-ENTC-A
//Problem Statement:- Write a code to show hierarchical inheritance.


#include <iostream>
using namespace std;

class Vehicle {
protected:
    string brand;
public:
    void setBrand(string b) { brand = b; }
};

class Car : public Vehicle {
    int seats;
public:
    void setCar(int s) { seats = s; }
    void display() {
        cout << "Car Brand: " << brand << ", Seats: " << seats << endl;
    }
};

class Bike : public Vehicle {
    int cc;
public:
    void setBike(int c) { cc = c; }
    void display() {
        cout << "Bike Brand: " << brand << ", CC: " << cc << endl;
    }
};

class Truck : public Vehicle {
    double loadCapacity; // in tons
public:
    void setTruck(double load) { loadCapacity = load; }
    void display() {
        cout << "Truck Brand: " << brand << ", Load Capacity: " << loadCapacity << " tons" << endl;
    }
};

class Bus : public Vehicle {
    int passengers;
public:
    void setBus(int p) { passengers = p; }
    void display() {
        cout << "Bus Brand: " << brand << ", Passengers: " << passengers << endl;
    }
};

int main() {
    Car c;
    Bike b;
    Truck t;
    Bus bus;

    c.setBrand("Toyota");
    c.setCar(5);
    c.display();

    b.setBrand("Honda");
    b.setBike(150);
    b.display();

    t.setBrand("Tata");
    t.setTruck(10);
    t.display();

    bus.setBrand("Volvo");
    bus.setBus(50);
    bus.display();

    return 0;
}


/*Output:-
Car Brand: Toyota, Seats: 5
Bike Brand: Honda, CC: 150
Truck Brand: Tata, Load Capacity: 10 tons
Bus Brand: Volvo, Passengers: 50
*/
