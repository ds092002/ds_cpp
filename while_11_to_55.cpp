#include<iostream>

using namespace std;

int main()
{
    int i = 1,j,a = 11;

    while (i <= 5)
    {
        j = 1;
        while (j <= 5)
        {
            cout << a << "\t";
            a++;
            j++;
        }
        cout << "\n";
        a += 5;
        i++;
    }
    
}