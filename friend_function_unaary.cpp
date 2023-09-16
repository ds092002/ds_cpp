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

    friend Squar operator++(Squar &a);
};


    Squar operator++(Squar &a)
    {
        Squar squar;

        squar.s = a.s++;

        return squar;
    }


int main()
{
    Squar sq1;

    sq1.setdata(12);
    cout << " Squar 1 Value is : "<< sq1.getdat() << endl;
    
    ++sq1;
    cout << " Squar 2 Value is : "<< sq1.getdat() << endl;
}