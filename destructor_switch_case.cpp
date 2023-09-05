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
        cout << "\nArea Of Square is: " << s * s ;
    }

    Area(double w , double h)
    {
        cout << "\nArea of Rectangle is: " << w * h ;
    }

    Area(int b,int h)
    {
        cout << "\nArea of Triangle is: " << (b * h) / 2;
    }

    ~Area()
    {
        cout << "\nObject Destroyed";
    }
};

int main()
{
    int choice;
    double r, w, h1;
    int s, b,  h;

    cout << "Enter your choice:\n";
    cout << "1. Circle\n";
    cout << "2. Square\n";
    cout << "3. Rectangle\n";
    cout << "4. Triangle\n";
    cin >> choice;

    switch (choice)
    {
        case 1:
            cout << "Enter the radius of the circle: \n";
            cin >> r;
            {
                Area circle(r);
                break;
            }
        case 2:
            cout << "Enter the side of the square: \n";
            cin >> s;
            {
                Area square(s);
                break;
            }
        case 3:
            cout << "Enter the width and height of the rectangle: \n";
            cin >> w >> h1;
            {
                Area rectangle(w, h1);
                break;
            }
        case 4:
            cout << "Enter the base and height of the triangle: \n";
            cin >> b >> h;
            {
                Area triangle(b, h);
                break;
            }
        default:
            cout << "Invalid choice\n";
    }

}
