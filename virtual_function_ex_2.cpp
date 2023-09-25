#include <iostream>

using namespace std;

class Shape
{
    public:
        virtual void draw()
        {
            cout << "drawing..." << endl;
        }
};

class Rectangle : public Shape
{
    public:
        void draw()
        {
            cout << "drawing rectangle..." << endl;
        }
};

class Circle : public Shape
{
    public:
        void draw()
        {
            cout << "drawing circle..." << endl;
        }
};

int main(void)
{
    Shape a, *b;
    Rectangle r;
    Circle c;

    b = &a;
    b->draw();

    b = &r;
    b->draw();

    b = &c;
    b->draw();
}