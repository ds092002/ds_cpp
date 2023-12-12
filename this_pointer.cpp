#include<iostream>

using namespace std;

class Test{
    int bal , amount;
    string name;

    public :
    void setData(int bal , int amount , string name){
        this->bal = bal;
        this->amount = amount;
        this->name = name;
    }

    void showData(){
        cout<<"Bal : "<< bal << endl;
        cout<<"Amount : "<< amount << endl;
        cout<<"Name : "<< name << endl;
    }
};

int main()
{
    Test t;
    t.setData(100,1200,"Hello");
    t.showData();
}