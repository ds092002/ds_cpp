#include<iostream>

using namespace std;

class TEST
{
    int x;
    double x1;
    char x2;
    string x3;

    public :

    TEST(int a ,double b ,char c , string d)
    {
        x = a;
        x1 = b;
        x2 = c;
        x3 = d;
    }

    void setdata()
    {
        cout << "Integar value is : " << x << endl ;
        cout << "Dobule value is : " << x1 << endl ;
        cout << "Character value is : " << x2 << endl ;
        cout << "String is : " << x3 << endl;
    }
};

int main()
{

    TEST tes(7,9.2,'D',"Dhaval");
    tes.setdata();

    TEST t(tes);
    t.setdata();
}