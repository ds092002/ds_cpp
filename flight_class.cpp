#include<iostream>

using namespace std;

class flight
{
    int num;
    char des[20];
    float dis;
    float fuel;
    
    float CALFUEL()
    {
        if (dis <= 1000)
        {
            fuel = 500;
        }
        else if (dis >= 1000 && dis <= 2000)
        {
            fuel = 1100;
        }
        else
        {
            fuel = 2200;
        }
    }

    public :

    void FEEDINFO()
    {
        cout << "Enter Flight Number. : ";
        cin >> num;
        cout << "Enter Destination. : ";
        cin >> des;
        cout << "Enter Distance. : ";
        cin >> dis;

        CALFUEL();
    }

    void SHOWINF()
    {
        cout << "\nFlight Number   : " << num << "\n";
        cout << "Destination is  : " << des << "\n";
        cout << "Distance is     : " << dis << "\n";
        cout << "Fuel            : " << fuel << "\n";
    }
};

int main()
{
    flight f;

    f.FEEDINFO();
    f.SHOWINF();
}