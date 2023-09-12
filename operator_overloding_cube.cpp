#include <iostream> 

using namespace std;

class Cube
{
    double area;
    double side;

    public :

    void setdata( double s)
    {
        side = s;
    }

    Cube operator+(Cube &c)
    {
        Cube cu;

        cu.side = side + c.side;

        return cu;
    }

    double getdata()
    {
        area = 6 * side * side ;

        return area;
    }
};
int main()
{
    Cube c1,c2,c3;

    c1.setdata(4);
    cout << "Cube 1 Value is : " << c1.getdata() << endl;
    
    c2.setdata(6);
    cout << "Cube 2 Value is : " << c2.getdata() << endl;

    c3 = c1 + c2 ;
    cout << "Cube 3 Value is : " << c3.getdata() << endl;
}