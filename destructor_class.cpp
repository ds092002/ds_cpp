#include<iostream>

using namespace std;

class Area
{
     public :

    Area(double r)
    {
        cout <<"Area Of Circle is. : "<< 3.14 * r * r;
    }

    Area(int s)
    {
        cout <<"\nArea Of Squre is. : "<< s * s;
    }

    Area(double w, double h)
    {
        cout <<"\nArea of Rectrangle is. : "<< w * h;
    }
    
    ~ Area()
    {
        cout <<"\nDestructor Distroy ";
    }
    Area(int b, int h)
    {
        cout <<"\nArea of Triangle is. : "<< (b * h) / 2;
    }

};
int main()
{
    Area a(20.56),b(15),c(10.99,5.23),d(),e(23,16);
}