#include <iostream>

using namespace std ;

int main()
{
    int a,n,i=1;

    cout << " Enter value :";
    cin >> n ;

    for ( a = 1; a <= n; a++)
    {
        cout << a * i << "\t";
        i *= 2; 
    }
}