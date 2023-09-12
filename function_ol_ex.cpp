#include <iostream>

using namespace std;
class test
{
    int a , b;

    public :

    void setData()
    {
        cout << "Enter A value : " << endl ;
        cin >> a;
    }

    void setData(int a)
    {
        b = a;
        cout << "Value of B is : " << b <<  endl ;
        cin >> a;
    }

};

int main()
{
    test te;

    te.setData();
    te.setData(20);
}