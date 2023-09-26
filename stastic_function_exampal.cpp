#include <iostream>

using namespace std;

class Car
{
public:
    static int a;

    Car()
    {
        ++a;
    }

    void display()
    {
        cout << "display function call ..."<< endl;
    }
};

int Car :: a = 0;

int main ()
{
    Car c1;
    c1.display();
    
    Car c2;
    c2.display();

    Car c3;
    c3.display();

    cout << "no of object call is "<<Car :: a << endl;
}