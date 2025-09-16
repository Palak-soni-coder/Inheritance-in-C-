//EXPERIMENT 14
//Name:- Palak Soni
//Class:-ENTC A
//Problem Statement:- Write a code to show the use of access specifiers.

#include <iostream>
using namespace std;

class Vehicle {
private:
protected:
    string brand;        
public:
    string color;       

    void setData(string b, string c, int w) {
        brand = b;
        color = c;
        wheels = w;
    }

    void displayVehicle() {
        cout << "Brand: " << brand << ", Color: " << color 
             << ", Wheels: " << wheels << endl;
    }
};

class Car : public Vehicle {
private:
    int seats;
public:
    void setCarData(int s) { seats = s; }
    void displayCar() {
        displayVehicle();
        cout << "Seats: " << seats << endl;
    }
};

int main() {
    Car c;
    c.setData("Toyota", "Red", 4); 
    c.color = "Blue";             
    c.setCarData(5);
    c.displayCar();
    return 0;
}

/*Output:-
Brand: Toyota, Color: Blue, Wheels: 4
Seats: 5
*/
