#include<iostream>

using namespace std;
class Area
{
    public :

    Area(double r)
    {
        cout <<"\nArea Of Circle is. : "<< 3.14 * r * r;
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
        cout <<"\nDestructor Distroy";
    }

    Area(int b, int h)
    {
        cout <<"\nArea of Triangle is. : "<< (b * h) / 2;
    }

};
int main()
{
    int choice;
    double r , w , h1;
    int s , b , h;

    cout <<"\nEnter Your Choice. :";
    cout <<"\n1. Cricle. :";
    cout <<"\n2. Square. :";
    cout <<"\n3. Rectrangle. :";
    cout <<"\n4. Triangle. :\n";
    cin >> choice;

    switch (choice)
    {
        case 1:
             cout <<"\nEnter The Radius Of The Cricle. :";
             cin >> r;
             {
                Area circle(r);
                break;
             }
        case 2:
             cout <<"\nEnter The value Of Squar. :";
             cin >> s;
             {
                Area Squar(s);
                break;
             }
        case 3:
             cout <<"\nEnter The Width and Height Of The Rectangle. :";
             cin >> w >> h1;
             {
                Area Rectrangle(w , h1);
                break;
             }
        case 4:
             cout <<"\nEnter The Base and Height Of The Triangle. :";
             cin >> b >> h;
             {
                Area Triangle(b , h);
                break;
             }
        default :
             cout <<"\nYou Enter Invalid Choice........";      
    }
}
