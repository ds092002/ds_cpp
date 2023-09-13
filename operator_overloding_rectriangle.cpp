#include <iostream>

using namespace std;
class Rectangle
{
    double length;
    double 	width;

    public :

    void setdata(double l , double w)
    {
        length = l;
        width = w;
    }

    Rectangle operator+(Rectangle &r)
    {
        Rectangle rec;

        rec.length = length + r.length;
        rec.width =  width + r.width;

        return rec;
    }

    double getdata()
    {
        return length * width ;
    }
};

int main()
{
    Rectangle rec1,rec2,rec3;

    rec1.setdata(5.2,2.5);
    cout << "Rectangle 1 Value is : " << rec1.getdata() << endl;
    
    rec2.setdata(10.2,5.5);
    cout << "Rectangle 2 Value is : " << rec2.getdata() << endl;

    rec3 = rec1 + rec2;
    cout << "Rectangle 3 Value is : " << rec3.getdata() << endl;
}