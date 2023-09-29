#include <iostream>

using namespace std;

class Shape
{
    public:
        virtual void draw() = 0;
       
        void display()
        {
             cout << "drawing..." << endl;
        }
};

class Rectangle : public Shape
{
    public:
        void display()
        {
             cout << "drawing..." << endl;
        }
        void draw()
        {
            cout << "drawing rectangle..." << endl;
        }
};

class Circle : public Shape
{
    public:
        void display()
        {
             cout << "drawing..." << endl;
        }
        void draw()
        {
            cout << "drawing circle..." << endl;
        }
};

int main()
{
    Shape *b;
    Rectangle r;
    Circle c;

    
    b->display();

    b = &r;
    b->display();
    b->draw();
    b = &c;
    b->display();
    b->draw();
}