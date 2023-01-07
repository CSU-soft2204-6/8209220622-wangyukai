#include <iostream>
#include"math.h"
#define pi 3.14
using namespace std;
//class Circle;
//class Square;
//class Rectangle;
//class Trapezoid;
//class Triangle;

class Shape {
public:
    virtual double getSquare() {
        return 0;
    }

private:

};

class Circle :public Shape {
public:
    Circle(double r) {
        m_R = r;
    }

    double getSquare() {
        return pi * m_R * m_R ;
    }

private:
    double m_R;

};

class Square :public Shape {
public:
    Square(double l) {
        m_L = l;
    }

    double getSquare() {
        return m_L * m_L ;
    }


private:
    double m_L;
};

class Rectangle :public Shape {
public:
    Rectangle(double l, double w) {
        m_Length = l;
        m_Width = w;
    }

    double getSquare() {
        return m_Length * m_Width;
    }

private:
    double m_Length;
    double m_Width;
};

class Trapezoid :public Shape {
public:
    Trapezoid(double a, double b, double h) {
        m_A = a;
        m_B = b;
        m_H = h;
    }

    double getSquare() {
        return (m_A + m_B) * m_H * 0.5 ;
    }

private:
    double m_A;
    double m_B;
    double m_H;

};

class Triangle :public Shape {
public:
    Triangle(double a, double b, double c) {
        m_A = a;
        m_B = b;
        m_C = c;
    }

    double getSquare() {
        double p;
        p = 0.5 * (m_A + m_B + m_C);
        return sqrt(p * (p - m_A) * (p - m_B) * (p - m_C)) ;
    }


private:
    double m_A;
    double m_B;
    double m_C;
};


void showSquare(Shape& shape) {
    cout<<shape.getSquare()<<endl;
}

int main()
{

    Circle circle(10.2);
    Square square(3);
    Rectangle rectangle(3, 4);
    Trapezoid trapezoid(2.0, 4.5, 3);
    Triangle triangle(4, 5, 6);

    Shape* p1 = &circle;
    Shape* p2 = &square;
    Shape* p3 = &rectangle;
    Shape* p4 = &trapezoid;
    Shape* p5 = &triangle;

    Shape* a[5] = { p1,p2,p3,p4,p5 };

    showSquare(*a[0]);
    showSquare(*a[1]);
    showSquare(*a[2]);
    showSquare(*a[3]);
    showSquare(*a[4]);

    double sumS = circle.getSquare() + square.getSquare() + rectangle.getSquare() + trapezoid.getSquare() + triangle.getSquare();

    cout<<"面积和是："<<sumS<<endl;



}

