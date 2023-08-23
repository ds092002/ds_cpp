#include <iostream>

using namespace std ;

int main()
{
    int i;

    for ( i = 65; i < 90; i+=2)
    {
        if (i%4==1)
        {
            cout << (char )i  << "\t";
        }
        
        else
        {
            cout << (char) (i + 32) << "\t";
        }
    }
}