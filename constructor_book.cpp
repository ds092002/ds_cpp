#include<iostream>

using namespace std;

class BOOK
{
    int book_no;
    char book_title[20];
    float price;
    float cost;

    float TOTAL_COST(int N)
    {
        cost = price * N;

        return cost;
    }

    public :

    BOOK()
    {
        cout << "Book Number. : ";
        cin >> book_no;
        cout << "Book Name. : ";
        cin >> book_title;
        cout << "Enter Book Price. : ";
        cin >> price;
    }
    void PURCHASE()
    {
        int numcopies;
        cout << "How Many Copies : ";
        cin >> numcopies;
        cost = TOTAL_COST(numcopies);
        cout << "Total Cost Of Copies : RS."<<cost<<"\n";
        
        cout<<"BOOK'S BILL. :";
        cout <<"\nNo.\tName\tPrice\tCopies\tCost";
        cout <<"\n" <<book_no<<"\t"<<book_title<<"\t"<<price<<"\t"<<numcopies<<"\t"<<cost;
    }

};

int main()
{
    BOOK b;
    b.PURCHASE();

    return 0;
}