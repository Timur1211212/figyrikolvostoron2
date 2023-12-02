#include <iostream>
using namespace std;

class Triangle {
protected:
    string ShapeName; int a, b, c, A, B, C;
public:
    Triangle(){
        ShapeName = "Треугольник"; a = 10; b = 20; c = 30; A = 50; B = 60; C = 70;
    }

    virtual void print_info() {
        cout << "\n" << ShapeName << ":" << "\nСтороны: " << "a=" << a << " b=" << b << " c=" << c
            << "\nУглы: " << "A=" << A << " B=" << B << " C=" << C << endl;
    }
};
class A_right_angled_triangle : public Triangle {
public:
    A_right_angled_triangle(){
        ShapeName = "Прямоугольный треугольник"; a = 10; b = 20; c = 30; A = 50; B = 60; C = 90;
    }

    void print_info () override {
        cout << "\n" << ShapeName << ":" << "\nСтороны: " << "a=" << a << " b=" << b << " c=" << c
            << "\nУглы: " << "A=" << A << " B=" << B << " C=" << C << endl;
    }
};
class Isosceles_triangle : public A_right_angled_triangle {
public:
    Isosceles_triangle(){
        ShapeName = "Равнобедренный треугольник"; a = 10; b = 20; c = 10; A = 50; B = 60; C = 50; 
    }
 
    void print_info() override {
        cout << "\n" << ShapeName << ":" << "\nСтороны: " << "a=" << a << " b=" << b << " c=" << c
            << "\nУглы: " << "A=" << A << " B=" << B << " C=" << C << endl;
    }
};
class Equilateral_triangle : public Isosceles_triangle {
public:
    Equilateral_triangle(){
        ShapeName = "Равносторонний треугольник"; a = 30; b = 30; c = 30; A = 60; B = 60; C = 60;
    }

    void print_info() override
    {
        cout << "\n" << ShapeName << ":" << "\nСтороны: " << "a=" << a << " b=" << b << " c=" << c
            << "\nУглы: " << "A=" << A << " B=" << B << " C=" << C << endl;
    }
};
class Quadrilateral : public Triangle {
protected:
    int d, D;
public:
    Quadrilateral(){
        ShapeName = "Четырёхугольник"; a = 10; b = 20; c = 30; d = 40; A = 50; B = 60; C = 70; D = 80;
    }
    void print_info() override
    {
        cout << "\n" << ShapeName << ":" << "\nСтороны: " << "a=" << a << " b=" << b << " c=" << c << " d=" << d
            << "\nУглы: " << "A=" << A << " B=" << B << " C=" << C << " D=" << D << endl;
    }
};
class Rectangle : public Quadrilateral {
public:
    Rectangle(){ ShapeName = "Прямоугольник"; a = 10; b = 20; c = 10; d = 20; A = 90; B = 90; C = 90; D = 90; }

    void print_info() override
    {
        cout << "\n" << ShapeName << ":" << "\nСтороны: " << "a=" << a << " b=" << b << " c=" << c << " d=" << d
            << "\nУглы: " << "A=" << A << " B=" << B << " C=" << C << " D=" << D << endl;
    }
};
class Square : public Rectangle {
public:
    Square() { ShapeName = "Квадрат"; a = 20; b = 20; c = 20; d = 20; A = 90; B = 90; C = 90; D = 90; }

    void print_info() override
    {
        cout << "\n" << ShapeName << ":" << "\nСтороны: " << "a=" << a << " b=" << b << " c=" << c << " d=" << d
            << "\nУглы: " << "A=" << A << " B=" << B << " C=" << C << " D=" << D << endl;
    }
};
class Parallelogram : public Square {
public:
    Parallelogram() { ShapeName = "Параллелограмм"; a = 20; b = 30; c = 20; d = 30; A = 30; B = 40; C = 30; D = 40; }

    void print_info() override
    {
        cout << "\n" << ShapeName << ":" << "\nСтороны: " << "a=" << a << " b=" << b << " c=" << c << " d=" << d
            << "\nУглы: " << "A=" << A << " B=" << B << " C=" << C << " D=" << D << endl;
    }
};
class Rhomb : public Parallelogram {
public:
    Rhomb() { ShapeName = "Ромб"; a = 30; b = 30; c = 30; d = 30; A = 30; B = 40; C = 30; D = 40; }

    void print_info() override
    {
        cout << "\n" << ShapeName << ":" << "\nСтороны: " << "a=" << a << " b=" << b << " c=" << c << " d=" << d
            << "\nУглы: " << "A=" << A << " B=" << B << " C=" << C << " D=" << D << endl;
    }
};
int main()
{
    setlocale(LC_ALL, "Russian");
    Triangle triangle;
    triangle.print_info();
    A_right_angled_triangle a_right_angled_triangle;
    a_right_angled_triangle.print_info();
    Isosceles_triangle isosceles_triangle;
    isosceles_triangle.print_info();
    Equilateral_triangle equilateral_triangle;
    equilateral_triangle.print_info();
    Quadrilateral quadrilateral;
    quadrilateral.print_info();
    Rectangle rectangle;
    rectangle.print_info();
    Square square;
    square.print_info();
    Parallelogram parallelogram;
    parallelogram.print_info();
    Rhomb rhomb;
    rhomb.print_info();
}
