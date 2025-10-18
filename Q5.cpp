#include <iostream>
using namespace std;

class Shape
{
public:
    virtual double area() const = 0;
    virtual void draw() const = 0;

    virtual ~Shape() {}
};

class Circle : public Shape
{
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() const override
    {
        const double PI = 3.1416;
        return PI * radius * radius;
    }

    void draw() const override
    {
        cout << "Drawing a Circle with radius " << radius << endl;
    }
};

class Rectangle : public Shape
{
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double area() const override
    {
        return width * height;
    }

    void draw() const override
    {
        cout << "Drawing a Rectangle of width " << width
             << " and height " << height << endl;
    }
};

int main()
{

    const int SIZE = 4;
    Shape *shapes[SIZE];

    shapes[0] = new Circle(5.0);
    shapes[1] = new Rectangle(4.0, 6.0);
    shapes[2] = new Circle(3.0);
    shapes[3] = new Rectangle(2.5, 7.0);

    cout << "--- Shape Details ---\n";
    for (int i = 0; i < SIZE; ++i)
    {
        shapes[i]->draw();
        cout << "Area: " << shapes[i]->area() << "\n\n";
    }

    for (int i = 0; i < SIZE; ++i)
    {
        delete shapes[i];
    }

    return 0;
}
