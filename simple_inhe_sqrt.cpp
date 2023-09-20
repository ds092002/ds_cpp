#include<iostream>

#include<math.h>

using namespace std;

class Number
{
    protected :

    double num;

    public :

    void getData(double n)
    {
        num = n;
    }
};

class SQRT : public Number
{
    double r;

    public :

    void setData()
    {
        r = sqrt(num);

        cout <<"Squar Root is  : " << r << endl;
    }
};

int main()
{
    SQRT sr;

    double nu;

    cout <<"Enter The Number : ";
    cin >> nu;

    sr.getData(nu);

    sr.setData();
}
