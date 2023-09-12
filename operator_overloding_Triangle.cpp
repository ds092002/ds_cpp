#include <iostream>

using namespace std;
class Triangle
{
    double base;
    double height;

    public :

    void setdata(double b , double h)
    {
        base = b;
        height = h;
    }

    Triangle operator+(Triangle &t)
    {
        Triangle tri;

        tri.base = base + t.base;
        tri.height = height + t.height;

        return tri;
    }

    double getdat()
    {
        return (base * height) / 2;
    }
};

int main()
{
    Triangle tr1,tr2,tr3;

    tr1.setdata(4.5,2.6);
    cout <<"Triangle 1 Value is : " << tr1.getdat() << endl;
    
    tr2.setdata(8.5,4.6);
    cout <<"Triangle 2 Value is : " << tr2.getdat() << endl;

    tr3 = tr1 + tr2;
    cout <<"Triangle 3 Value is : " << tr3.getdat() << endl;
}