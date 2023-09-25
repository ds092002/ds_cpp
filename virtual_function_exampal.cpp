#include <iostream>

using namespace std;
class Base
{
    public :

    virtual void showPrint()
    {
        cout <<"Base Class Output Print........." << endl;
    }
};

class Derived : public Base
{
    public :

    void showPrint()
    {
        cout <<"Derived Class Output Print........." << endl;
    }
};

int main()
{
    Base a ,*b;
    Derived d;

    b = &a;
    b->showPrint();

    b = &d;
    b->showPrint();
}