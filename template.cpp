#include <iostream>

using namespace std;

template <class T>
void display(T t1)
{
    cout << "Displaying Template : "
         << t1 << endl;
}

template < class x , class y >
void Display(x a , y b)
{
    cout << "Display Template : "
         << a << "\t"
         << b << endl;
}

int main()
{
    display(700);
    display(9.07);
    display('D');
    Display('D' , 7.99);
    Display('S' , 7);
    Display(99 , 07);

    return 0;
}