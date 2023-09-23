#include <iostream>

using namespace std;

class Vehicle 
{ 
    public:
    void display()
    {
        cout << "This is a vehicle." << endl;
    }
};

class Car : public Vehicle
{
    public:
    void dis() 
    {
        display();
        cout << "This is a car." << endl;
    }
};

class Bicycle  
{
    public:
    void disp()
    {
        cout << "This is a bicycle." << endl;
    }
};

class ElectricVehicle : public Car, public Bicycle
{
    public:
    void show() 
    {
        dis();
        disp();
        cout << "This is an electric vehicle." << endl;
    }
};

int main() 
{
    ElectricVehicle ev;
    
    ev.show();
}