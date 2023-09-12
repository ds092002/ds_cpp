#include<iostream>

using namespace std;

class TEST
{
    int x;
    double x1;
    char x2;
    int x3[10];
    char x4[10];

    public :

    TEST(int a ,double b ,char c , int d[10] , char e[10])
    {
        x = a;
        x1 = b;
        x2 = c;
        for (int i = 0; i < 10; i++)
        {
            x3[i] = d[i];
        }
        for (int j = 0; j < 10; j++)
        {
            x4[j] = e[j];
        }
    }

    void setdata()
    {
        cout << "Integar value is : " << x << endl ;
        cout << "Dobule value is : " << x1 << endl ;
        cout << "Character value is : " << x2 << endl ;
        cout << "Array is: ";
        for (int i = 0; i < 10; i++)
        {
            cout << x3[i] << " ";
        }
        cout << endl;
        cout << "String is : " << x4 << endl ;
    }
};

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    char str[10]="Dhaval";

    TEST tes(7,9.2,'D',arr,str);
    tes.setdata();

    TEST t(tes);
    t.setdata();
}