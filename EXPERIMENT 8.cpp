
#include <iostream>
using namespace std;

class Person
 {
public:
    void showPerson()
     {
        cout << "I am a Person" << endl;
    }
};

class Student : public Person 
{
public:
    void showStudent() 
    {
        cout << "I am a Student" << endl;
    }
};

class Vehicle 
{
public:
    void showVehicle()
     {
        cout << "I am a Vehicle" << endl;
    }
};

class Car : public Vehicle 
{
public:
    void showCar() 
    {
        cout << "I am a Car" << endl;
    }
};

class ElectricCar : public Car 
{
public:
    void showElectricCar()
     {
        cout << "I am an Electric Car" << endl;
    }
};

int main() 
{
    Student s;
    s.showPerson();
    s.showStudent();

    ElectricCar e;
    e.showVehicle();
    e.showCar();
    e.showElectricCar();

    return 0;
}
