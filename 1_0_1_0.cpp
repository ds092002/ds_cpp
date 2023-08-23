#include <iostream>

using namespace std;

int main()
{
    int i,j,a=1;

    for ( i = 1; i <= 5; i++)
    {
        for ( j = 1; j <= i; j++)
        {
            cout << (a%2==1) << "\t";
            a++;
        }
        cout << "\n";
    }
    
}