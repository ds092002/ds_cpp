#include<iostream>

using namespace std;
void a()
{
    int a = 42 ,b = 30 , c = 97 , d = 20 , e;
    e = a + (b + c - d);
    cout << "Ans is : " << e << "\n";
}
int main()
{
    a();
}