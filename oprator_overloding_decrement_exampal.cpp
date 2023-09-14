#include<iostream>

using namespace std;

class Decrement
{
    int length;
    int width;

    public :

    void setdata(int l , int w)
    {
        length = l;
        width = w;
    }

    Decrement operator--(int)
    {
        Decrement dec;

        dec.length = length--;
        dec.width = width--;

        return dec;
    }

    int getdata()
    {
        return length * width ;
    }
};

int main()
{
    Decrement dec1,dec2;

    dec1.setdata(5,3);
    cout <<"Rectangle 1 value is : " << dec1.getdata() << endl;

    dec1--;
    cout <<"Rectangle 2 value is : " << dec1.getdata() << endl;
}