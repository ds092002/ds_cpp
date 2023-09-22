#include<iostream>

using namespace std;

class Area
{
    
    
public:

    Area(double r)
    {
        cout << "Area Of Circle is: " << 3.14 * r * r;
        
    }

    Area(int s)
    {
        cout << "Area Of Square is: " << s * s;
    }

    Area(double w, double h)
    {
        cout << "Area of Rectangle is: " << w * h;
    }

    Area(int b, int h)
    {
        cout << "Area of Triangle is: " << (b * h) / 2;
    }
};

int main()
{
    int choice;
    double r, w, h;
    int s , b ,h1;

    cout << "Choose a shape to calculate its area:\n";
    cout << "1. Circle\n";
    cout << "2. Square\n";
    cout << "3. Rectangle\n";
    cout << "4. Triangle\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            cout << "Enter the radius of the circle: ";
            cin >> r;
            {
                Area circle(r);
                break;
            }    

        case 2:
            cout << "Enter the side length of the square: ";
            cin >> s;
            {
                Area square(s);
                break;
            }    

        case 3:
            cout << "Enter the width and height of the rectangle: ";
            cin >> w >> h;
            {
                Area rectangle(w, h);
                break;
            }
        case 4:
            cout << "Enter the base and height of the triangle: ";
            cin >> b >> h;
            {
                Area triangle(b, h1);
                break;
            }    

        default:
            cout << "Invalid choice!";
    }
}
