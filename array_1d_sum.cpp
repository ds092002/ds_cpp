#include <iostream>

using namespace std;

int main()
{
    int a[10] , i ,s = 0;

    for ( i = 0; i < 10; i++)
    {
        cout << "Enter Value := ";
        cin >> a[i] ;
    }
    
    for ( i = 0; i < 10; i++)
    {
        s += a[i];
    }
    
 
    cout << " The Sum is :" << s << "\n";
}