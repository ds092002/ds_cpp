#include<iostream>

using namespace std;

class Answer 
{
    public :

    void ans()
    {
        cout << "The Answer Is :---------> " << endl;
    }
};

class Add : public Answer
{
    protected :
    int x = 20;
    int y = 30;

    public :

    void sum()
    {
        ans();
        cout <<" The Sum Of " << x << " + " << y << " is  : " << x + y << endl;
    }
};

class Sub : public Answer
{
    protected :

    int x = 50;
    int y = 30;

    public :

    void subtre()
    {
        ans();
        cout << "The Subtraction of " << x << " - " << y << " is : " << x - y << endl; 
    }
};

class Mul : public Answer
{
    protected : 

    int x = 20;
    int y = 30;

    public :

    void multi()
    {
        ans();
        cout << "The Multiplication of " << x << " * " << y << " is : " << x * y << endl;
    }
};

class Div : public Answer
{
    protected :

    double x = 150;
    double y = 30;

    public :

    void divi()
    {
        ans();
        cout << "The Division Of " << x << " / " << y << " is : " << x / y << endl;
    } 
};

class derived : public Answer
{
    protected :

    int x = 12;
    int y = 5;

    public :

    void der()
    {
        ans();
        cout << "The Modulus Of " << x << " % " << y << " is : " << x % y << endl;
    }
};
int main()
{
   Add a;
   Sub s;
   Mul m;
   Div d;
   derived d1;

   a.sum();
   s.subtre();
   m.multi();
   d.divi();
   d1.der();
}