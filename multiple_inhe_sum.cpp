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
        cout <<" The Sum Of " << x << " + " << y << " is  : " << x + y << endl;
    }
};

class Sub
{
    protected :

    int x = 50;
    int y = 30;

    public :

    void subtre()
    {
        cout << "The Subtraction of " << x << " - " << y << " is : " << x - y << endl; 
    }
};

class Mul
{
    protected : 

    int x = 20;
    int y = 30;

    public :

    void multi()
    {
        cout << "The Multiplication of " << x << " * " << y << " is : " << x * y << endl;
    }
};

class Div
{
    protected :

    double x = 150;
    double y = 30;

    public :

    void divi()
    {
        cout << "The Division Of " << x << " / " << y << " is : " << x / y << endl;
    } 
};

class derived 
{
    protected :

    int x = 12;
    int y = 5;

    public :

    void der()
    {
        cout << "The Modulus Of " << x << " % " << y << " is : " << x % y << endl;
    }
};

class Answer : protected Add , protected Sub , protected Mul , protected Div , protected derived
{
    public :

    void ans()
    {
        cout << "The Answer Is :---------> " << endl;

        sum();
        subtre();
        multi();
        divi();
        der();
    }
};
int main()
{
    Answer a;

    a.ans();
}