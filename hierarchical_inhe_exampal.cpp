#include<iostream>

using namespace std;

class Animal 
{
    public :

    void animal()
    {
        cout <<"Animal Can : " << endl;
    }
};

class Bird : public Animal
{
    public :

    void fly()
    {
        animal();
        cout <<"Bird Can Fly  " << endl;
    }
};

class Fish  : public Animal
{
    public :

    void swim()
    {
        animal();
        cout <<"Fish Can Swim " << endl;
    }
};


int main()
{
    Bird b;
    Fish f;

    b.fly();
    f.swim();
}