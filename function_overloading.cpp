#include<iostream>

using namespace std;
class function
{
    public :

    void area(double r)
    {
        cout << "Enter Area Of Circle : "<< 3.14 * r * r << endl ;
    }

    void area(int s)
    {
        cout <<"Enter Area Of Squar : "<< s * s << endl;
    }

    void area(double w ,double h)
    {
        cout <<"Enter Area Of Rectangle : "<< w * h << endl;
    }

    void area(int b , int h)
    {
        cout <<"Enter Area Of Triangle : "<< (b * h) / 2 << endl; 
    }

};

int main()
{
    function a;

    a.area(20.56);
    a.area(12);
    a.area(20.15,15.89);
    a.area(20,25);
}