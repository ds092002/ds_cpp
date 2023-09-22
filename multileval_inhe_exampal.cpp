#include<iostream>

using namespace std;

class Bird
{
    public :

    void fly()
    {
        cout <<"Bird Can Fly  " << endl;
    }
};

class Fish  : public Bird
{
    public :

    void swim()
    {
        fly();
        cout <<"Fish Can Swim " << endl;
    }
};

class Animal : public Fish
{
    public :

    void animal()
    {
        cout <<"Animal Can : " << endl;
        swim();
    }
};

int main()
{
    Animal ani;

    ani.animal();
}