// deposite , withdrow, show for bank functionality
#include<iostream>
using namespace std;

class Bank{
    int w,d,s=0;
    public:
    void deposite()
    {
     cout << "enter the amount :";
     cin >> d;
     s = s + d;
    }

    void withdrow()
    {
        cout << "enter the amount :";
        cin >> w;
        s = s - w;
    }

    void show()
    {
        cout << "your currunt balance is :" << s << endl;
    }
};

int main()
{
 int ch;
 Bank bank;

 

 cout << "press 1 for deposite amount " << endl;
 cout << "press 2 for withdrow amount " << endl;
 cout << "press 3 for show amount " << endl;
 cout << "press 0 for exit " << endl;
 cout << "\n \n";

 do{
    cout << "press botton for your transaction :";
    cin >> ch;

    switch(ch)
    {
        case 1:
        bank.deposite();
        break;

        case 2:
        bank.withdrow();
        break;

        case 3:
        bank.show();
        break;

        case 0:
        break;

        default:
        cout << "wrong :";
        break;

    }
 }  while(ch!=0);
 
}