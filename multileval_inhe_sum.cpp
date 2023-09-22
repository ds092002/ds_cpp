#include<iostream>

using namespace std;

class Add
{
    protected :
    int x = 20;
    int y = 30;

    public :

    void sum()
    {
        cout <<"The Sum Of " << x << " + " << y << " is  : " << x + y << endl;
    }
};

class Sub : public Add
{
    protected :

    int x = 50;
    int y = 30;

    public :

    void subtre()
    {
        sum();
        cout << "The Subtraction of " << x << " - " << y << " is : " << x - y << endl; 
    }
};

class Mul : public Sub
{
    protected : 

    int x = 20;
    int y = 30;

    public :

    void multi()
    {
        subtre();
        cout << "The Multiplication of " << x << " * " << y << " is : " << x * y << endl;
    }
};

class Div : public Mul
{
    protected :

    double x = 150;
    double y = 30;

    public :

    void divi()
    {
        multi();
        cout << "The Division Of " << x << " / " << y << " is : " << x / y << endl;
    } 
};

class derived : public Div 
{
    protected :

    int x = 12;
    int y = 5;

    public :

    void der()
    {
        divi();
        cout << "The Modulus Of " << x << " % " << y << " is : " << x % y << endl;
    }
};

class Answer : protected derived
{
    public :

    void ans()
    {
        cout << "The Answer Is :---------> " << endl;
        der();
    }
};
int main()
{
    Answer a;

    a.ans();
}