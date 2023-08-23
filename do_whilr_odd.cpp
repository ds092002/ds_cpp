#include<iostream>

using namespace std;

int main()
{
    int i = 1, j ;

    do
    {
        j = 1;
        do
        {
            cout << i << "\t";
            j++;
        } while (j <= 5);
        
        cout << "\n";
        i += 2;
    } while (i <= 10);
    
    return 0;
}
