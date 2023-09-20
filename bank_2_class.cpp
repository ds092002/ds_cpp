// deposite , withdrow, show for bank functionality
#include<iostream>

using namespace std;


class Bank{
    int w=0,d=0,s=0;
    public:
    void deposite()
    {
     cout << "enter the Deposit amount :" << endl;
     cin >> d;
     if (d > 0)
     {
        s = s + d; 
     }
     else
     {
        cout << "Invalid Entry....."<< endl;;
     }
     
    }

    void withdrow()
    {
        
        cout << "enter the Withdraw amount :" << endl;
        cin >> w;
        if (w > 0 && w <= s)
        {
            s = s - w;
        }
        else
        {
            cout <<"Invalid Entry......!"<<endl;
        }
        
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

 

 cout << "1 : Deposite amount " << endl;
 cout << "2 : Withdrow amount " << endl;
 cout << "3 : Show Balance " << endl;
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