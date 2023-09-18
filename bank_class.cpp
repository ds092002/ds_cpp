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
    double acc;

    Bank acc(name , acc)
}