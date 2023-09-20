#include <iostream>

using namespace std;

class Person
{
    int id;
    string name;

    public :

    void Set_p()
    {
        cout <<"Enter Person ID: ";
        cin >> id;
        cout <<"Enter Person Name: ";
        cin >> name;
    }
};
class Skill : public Person
{
    string sk;

    public :

    void Set_s()
    {
        
        cout <<"Enter Person Skill: ";
        cin >> sk;
    }
};

int main()
{
    Skill skill;

    skill.Set_p();
    skill.Set_s();
}