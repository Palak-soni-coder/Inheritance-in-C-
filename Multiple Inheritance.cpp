//EXPERIMENT 14
//Name:- Palak Soni
//Class:-ENTC A
//PRN:- 24070123069
//Problem Statement:- Write a code to show Multiple Inheritance.

#include <iostream>
using namespace std;

class Employee {
protected:
    string name;
    int id;
public:
    void setEmployee(string n, int i) {
        name = n;
        id = i;
    }
};

class Salary {
protected:
    double salary;
public:
    void setSalary(double s) {
        salary = s;
    }
};

class Manager : public Employee, public Salary {
public:
    void display() {
        cout << "Manager Name: " << name << "\n ID: " << id << "\n Salary: Rs " << salary << endl;
    }
};

int main() {
    Manager m;
    m.setEmployee("Palak Soni", 101);
    m.setSalary(75000);
    m.display();
    return 0;
}

/*Output:-
Manager Name: Palak Soni
ID: 101
Salary: Rs 75000
*/
