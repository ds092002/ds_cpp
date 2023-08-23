#include<iostream>

using namespace std ;

int main()
{
    for (int i = 1; i <= 15; i++)
    {
        if (i == 5 || i == 13)
        {
            continue;
        }
        cout << i << "\t";
    }
}