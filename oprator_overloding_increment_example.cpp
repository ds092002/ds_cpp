#include <iostream>

using namespace std;

class Increment
{
    int area;
    int side;

    public :

    void setdata(int s)
    {
        side = s;
    }

    Increment operator++(int)
    {
        Increment inc;

        inc.side = ++side;

        return inc;
    }

    int getdata()
    {
        area = 6 * side * side;

        return area;
    }
};

int main()
{
    Increment inc1,inc2;

    inc1.setdata(4);
    cout <<"Cube 1 is : " << inc1.getdata() << endl;

    inc1++;
    cout <<"Cube 2 is : " << inc1.getdata() << endl;
}