#include <iostream>

using namespace std;
class Circle
{
    double r;

    public :

    void setdata(double ra)
    {
        r = ra;
    }

    Circle operator+(Circle &c)
    {
        Circle cir;

        cir.r = r + c.r;

        return cir;
    }

    double getdat()
    {
        return 3.14 * r * r ;
    }
};

int main()
{
    Circle cir1,cir2,cir3;

    cir1.setdata(2);
    cout << " Circle 1 value is : " << cir1.getdat() << endl ;

    cir2.setdata(3);
    cout << " Circle 2 value is : " << cir2.getdat() << endl ;

    cir3 = cir1 + cir2 ;
    cout << " Circle 3 value is : " << cir3.getdat() << endl ;

}