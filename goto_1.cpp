#include<iostream>

using namespace std;

int main()
{
    int i = 1;
    test :
         if(i <= 15)
         {
            cout << i <<"\t";
            i++;
            goto test;
         }
}