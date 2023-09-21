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

class Fish
{
    public :

    void swim()
    {
        cout <<"Fish Can Swim " << endl;
    }
};

class Animal : protected Bird , protected Fish
{
    public :

    void animal()
    {
        cout <<"Animal Can : " << endl;
        fly();
        swim();
    }
};

int main()
{
    Animal ani;

    ani.animal();
}