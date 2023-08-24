#include<iostream>

using namespace std;
void a(int amm)
{
    int coins[]={25,10,5,2,1};
    int numcoins[]={0,0,0,0,0};
    int i;

    for ( i = 0; i < 5; i++)
    {
        numcoins[i] = amm / coins[i];
        amm = amm % coins[i];
    }

    cout << "25 : " << numcoins[0]<<"\n";
    cout << "10 : " << numcoins[1]<<"\n";
    cout << "5  : " << numcoins[2]<<"\n";
    cout << "2  : " << numcoins[3]<<"\n";
    cout << "1  : " << numcoins[4]<<"\n";
}
int main()
{
    int n ;
    
    cout << "Enter Ammount :" ;
    cin >> n ;

    a(n);
}