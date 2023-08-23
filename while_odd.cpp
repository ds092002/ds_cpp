#include<iostream>

using namespace std;

int main()
{
    int i = 1, j ;

    while (i <= 10)
    {
        j = 1;
        while (j <= 5)
        {
            cout << i << "\t";
            j++;
        }
        cout << "\n";
        i+=2;
    }
    
}