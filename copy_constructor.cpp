#include<iostream>

using namespace std;

class TEST
{
    int a;

    public :

    TEST(int b)
    {
       a = b;
    }

    // By Defulat Created By Computer
    TEST(TEST &te)
    {
        a = te.a;
    }

    void setdata()
    {
        cout << "Value of A is : " << a << endl;
    }

};

int main()
{
    TEST tes(777);
    tes.setdata();

    TEST te(tes);
    te.setdata();
}
