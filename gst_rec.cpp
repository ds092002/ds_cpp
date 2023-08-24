#include<iostream>

using namespace std;

struct gstbill
{
    int p , q, gst , bill , total_gst ,netbill;
    char name[50];
};

int main()
{
    struct gstbill a;

    cout << "Enter Product Name :" ;
    cin >> a.name ;

    cout << "Enter Price :" ;
    cin >> a.p ;

    cout << "Enter Quantity :" ;
    cin >> a.q ;

    cout << "Enter Bill Ammount :" ;
    cin >> a.bill ;

    a.gst = (a.p * 18 ) / 100 ;
    a.total_gst = a.q  * a.gst ;
    a.netbill = a.bill + a.total_gst ;

    cout << "GST Is : "<< a.gst << "\n";
    cout << "Total GST : "<< a.total_gst << "\n";
    cout << "Total Net Bill : "<< a.netbill << "\n";
}