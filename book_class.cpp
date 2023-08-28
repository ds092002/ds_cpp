#include<iostream>

using namespace std;

class BOOK
{
    int no;
    char name[20];
    float price;
    float totalcost;

    float TOTAL_COST(int N)
    {
        totalcost = price * N;

        return totalcost;
    }

    public :

    void INPUT()
    {
        cout <<"BOOK NO. : ";
        cin >> no;
        cout <<"BOOK NAME. : ";
        cin >> name;
        cout <<"BOOK PRICE. : ";
        cin >> price;
    }

    void PURCHASE()
    {
        int numcopies;
        cout << "How Many Copies : ";
        cin >> numcopies;
        totalcost = TOTAL_COST(numcopies);
        cout << "Total Cost Of Copies : RS."<<totalcost<<"\n";
    }
};

int main()
{
    BOOK b;

    b.INPUT();
    b.PURCHASE();
}