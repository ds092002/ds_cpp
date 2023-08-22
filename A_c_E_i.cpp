#include <iostream>

using namespace std ;

int main()
{
    char i;

    for ( i = 0; i < 26; i+=2)
    {
        if (i%4==0)
        {
            cout << i + 'A' << "\t";
        }
        
        else
        {
            cout << i + 'a' << "\t";
        }
    }
}