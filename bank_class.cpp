#include<iostream>

using namespace std;

class Bank
{
    string acc_name;
    double balance;

    public :

    Bank(string name , double bal)
    {
        acc_name = name ;
        balance = bal;
    }

    void Deposit(double ammount)
    {
        if (ammount > 0)
        {
            balance += ammount;
            cout << "Deposite Ammount : " << ammount << endl;
        }

        else
        {
            cout << "Invalid Deposite Entry ";
        }
    }

    void Withdraw(double ammount)
    {
        if (ammount > 0 && ammount <= balance)
        {
            balance -= ammount;
            cout << "With Draw Ammount : " << ammount << endl;
        }
        else
        {
            cout <<"Invalid With Draw Blance ";
        }
    }

    void Show()
    {
        cout <<"Account Holder : " << acc_name << endl;
        cout <<"Balance : " << balance << endl;
    }
};

int main()
{
    string name;
    double ac;

    Bank acc(name , ac);

    cout <<"Account Holder Name : ";
    cin >> name;

    cout <<"Total Balance : ";
    cin >> ac;

    Bank account(name , ac);

    while(true)
    {
        cout <<endl << "Options : "<<endl;
        cout <<"1. Deposit : "<<endl;
        cout <<"2. Withdraw : "<<endl;
        cout <<"3. Display Balance : "<<endl;
        cout <<"4. Exit : "<<endl;
        cout <<"Enter Your Choice : ";

        int choice;
        cin >> choice;

        switch (choice)
        {
        case 1 : 
            double deposit_ammount;
            cout <<"Enter The Deposit Amount : ";
            cin >> deposit_ammount;
            account.Deposit(deposit_ammount);
            break;

        case 2 : 
            double withdraw_ammount;
            cout <<"Enter The WithDraw Amount : ";
            cin >> withdraw_ammount;
            account.Withdraw(withdraw_ammount);
            break;
        
        case 3 :
            account.Show();
            break;

        case 4 :
            cout <<"Exiting Program Thank You Visit Again : " ;
            return 0;

        default:
            cout <<"You Enter Wrong Choice !!!!!!!! ";
            break;
        }
    }  
}