#include <iostream>

using namespace std;

class Base
{
    public :

    void display()
    {
        cout <<"Base Class Object Output Print........." << endl;
    }

    virtual void showPrint() = 0;
};

class Derived : public Base
{
    public :

    void display()
    {
        cout <<"Derived Class Object Output Print........." << endl;
    }

    void showPrint()
    {
        cout <<"Derived Class Output Print........." << endl;
    }
};

int main()
{
    Base *b;
    Derived d;

    b->display();

    b = &d;
    b->display();
    b->showPrint();
}