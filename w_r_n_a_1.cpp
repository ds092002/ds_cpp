#include<iostream>

using namespace std;
int a()
{
    int a = 42 ,b = 30 , c = 97 , d = 20 , e;
    e = (a - b) * c + d ;

    return e;
}
int main()
{
     int b = a();

    cout << "Ans is : " << b << "\n";
}