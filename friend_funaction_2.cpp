#include <iostream>

using namespace std;
class Squar
{
    double s;

    public :

    void setdata(double sq)
    {
        s = sq;
    }

    double getdat()
    {
        return s * s;
    }

    friend Squar operator+(Squar &a , Squar&b);
};


    Squar operator+(Squar &a , Squar &squ)
    {
        Squar squar;

        squar.s = a.s + squ.s;

        return squar;
    }


int main()
{
    Squar sq1,sq2,sq3;

    sq1.setdata(12);
    cout << " Squar 1 Value is : "<< sq1.getdat() << endl;
    
    sq2.setdata(14);
    cout << " Squar 2 Value is : "<< sq2.getdat() << endl;

    sq3 = sq1 + sq2;
    cout << " Squar 3 Value is : "<< sq3.getdat() << endl;
}