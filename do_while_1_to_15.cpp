#include <iostream>

using namespace std;

int main()
{
    int i = 1 ,j , a = 1;

    do
    {
        j = 1;
        do
        {
            cout << a << "\t";
            a++;
            j++;
        } while (j <= i);
        
        cout << "\n";
        i++;
    } while (i <= 5);
    
}