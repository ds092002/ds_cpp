#include <iostream>

using namespace std;

int a(int b)
{
    if(b == 0)
    {
        return 0;
    }
    else if (b == 1)
    {
        return 1;
    }
    else
    {
        return a(b-1) + a(b-2);
    }
}
int main()
{
    int i ,n ;

    cout << "Enter Number :";
    cin >> n ;

    for ( i = 0; i < n; i++)
    {
        cout << a(i) << "\t";
    }
    
}