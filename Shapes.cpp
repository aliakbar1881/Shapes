// Shapes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

class Shape {
protected:
    double x1, x2, x3, x4;
public:
    Shape() = default;
    Shape(double x, double y, double z, double t) {
        x1 = x;
        x2 = y;
        x3 = z;
        x4 = t;
    }

    double perimeter() const {
        return x1 + x2 + x3 + x4;
    }

    double area () const {
        double s;
        double tmp;
        s = perimeter() / 2;
        tmp = s * (s - x1) * (s - x2) * (s - x3) * (s - x4);
        return sqrt(tmp);
    }
};

class Rect : public Shape {
    Rect(double x, double y) {
        x1 = x;
        x2 = x;
        x3 = y;
        x4 = y;
    }
    
    double perimeter() {
        return (x1 + x3) * 2;
    }

    double area() {
        return x1 * x3;
    }
};

class Square : public Shape {
    Square(double x) {
        x1 = x;
        x2 = x;
        x3 = x;
        x4 = x;
    }

    double perimeter() {
        return x1 * 4;
    }

    double area() {
        return x1 * x3;
    }
};

class Circle : public Shape {
    Circle(double R) {
        x1 = R;
    }

    double perimeter() {
        return x1 * 3.14;
    }

    double area() {
        return (pow(x1, 2) * 3.14);
    }
};

int main()
{
    Shape shape = Shape(10, 12, 13, 14);
    std::cout << shape.area() << std::endl;
    std::cout << "Hello World!\n";
    getchar();
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
