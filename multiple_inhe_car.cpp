#include<iostream>

using namespace std;
class Fuel
{
    public :

    void petrol_Diesal()
    {
        cout <<"Runs With Petrol And Diesal......." << endl ;
    }
};

class Electrycity
{
    public :

    void ev()
    {
        cout <<"And Also Runs With Electrycity......."<< endl;
    }
};

class Car : protected Fuel , protected Electrycity
{
    public :

    void car()
    {
        cout <<"A Car.." << endl ;
        petrol_Diesal();
        ev();
    }
};
int main()
{
    Car c;

    c.car();
}