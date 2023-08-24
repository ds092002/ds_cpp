#include<iostream>

using namespace std;

int main()
{
    int a[3][3] , i , j ,s = 0;

    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            cout << " Enter Number : ";
            cin >> a[i][j];
        }
    }
    
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            if (i == j)
            {
                cout << a[i][j] << "\t";
                s += a[i][j];
            }
            else
            {
                 cout << "\t";
            }
        }
        cout << "\n";
    }

    cout << "Total sum is : " << s << "\n";
}