#include<iostream>

using namespace std;

class Number
{
    protected :

    int number;

    public :

    void getData()
    {
        cout <<"Enter Number : " ;
        cin >> number;
    }
};

class Fectorial : protected Number
{
    long long fect = 1;

    public :

    void setData()
    {
        getData();

        for (int i = 1; i <= number; i++)
        {
            fect = fect *  i;
        }
        
        cout <<"Fectorial Number : " << fect << endl;
    }
};

int main()
{
    Fectorial f;

    f.setData();
}