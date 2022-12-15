// Project15.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
class Complex{
public:
    double real;
    double image;
public:Complex() {
    real = 0;
    image = 0;
}
      Complex(double t_real,double t_image) {
          this->real = t_real;
          this->image = t_image;
      }
      void disply() {
          cout << "real=" << this->real << ";image=" << this->image << endl;
      }
      /*friend Complex operator +(Complex A, Complex B) {
          return Complex(A.real + B.real, A.image + B.image);
      }
      friend Complex operator ++(Complex& A) {
          return Complex(++A.real,A.image);
      }
      friend Complex operator ++(Complex& A ,int) {
          return Complex(A.real++, A.image);
      }*/

      Complex operator+(Complex B)
      {
          return Complex(this->real + B.real, this->image + B.image);
      }

      Complex operator++()
      {
          return Complex(++this->real, this->image);
      }

      Complex operator++(int)
      {
          return Complex(this->real++, this->image);
      }
      Complex operator-(Complex B)
      {
          return Complex(this->real - B.real, this->image - B.image);
      }

      Complex operator--()
      {
          return Complex(--this->real, this->image);
      }

      Complex operator--(int)
      {
          return Complex(this->real--, this->image);
      }
};

class PComplex {
private:
    Complex* PC;
public:
    PComplex(Complex* PC = NULL) {
        this->PC = PC;
    }
public:
    Complex* operator->() {
        if (PC != NULL) {
            return PC;
        }
        static Complex NullComplex(0, 0);
        return &NullComplex;
    }
};

class Point {
private:
    int X, Y;
public:
    Point(int X = 0, int Y = 0) {
        this->X = X;
        this->Y = Y;
    }
    virtual double area() {
        return 0.0;
    }
};

class Circle :public Point {
private:
    int r;
public:
    Circle(int X ,int Y,int r = 0):Point(X,Y) {
        this->r = r;
    }
    double area() {
        return 3.14 * r * r;
    }
};

class format {
protected:
    int x, y;
public:
    virtual double area() = 0;
    virtual void show() = 0;
};


class point :public format {
private:
    int x, y;
public:
    point(int x = 0, int y = 0) {
        this->x = x;
        this->y = y;
        cout << "point()被调用" << endl;
    }
    virtual double area() {
        return 0.0;
    }
    void show() {
        cout << x << '\t' << y << endl;
    }
    virtual ~point() {
        cout << "~point()被调用" << endl;
    }
};


class circle :public point {
public:
    int r;
public:
    circle(int x, int y, int r = 0) :point(x, y) {
        this->r = r;
        cout << "circle()被调用" << endl;
    }
    virtual double area() {
        return 3.14 * r * r;
    }
    void show() {
        cout << r << endl;
    }
    ~circle() {
        cout << "~circle()被调用" << endl;
    }
};



class cylinder :public circle {
private:
    double height;
public:
    cylinder(int x, int y, double r, double h) :circle(x, y, r) {
        height = h;
    }
    double area()
    {
        return 2 * circle::area() + 2 * 3.14 * r * height;
    }
    void show() {
        cout << height << endl;
    }
};



int main(double sid1,double sid2,double sid3)
{
    /*Complex comp1;
    comp1.real=1.0;
    comp1.image = 1.0;
    comp1.disply();

    Complex comp2(2.0,2.0);
    comp2.disply();
    Complex comp3 = comp1 + comp2;
    comp3.disply();
    Complex comp4 = comp3++;
    Complex comp5 = ++comp3;
    comp4.disply();
    comp5.disply();*/



    /*Complex comp1(1, 2);
    PComplex pcoml;
    pcoml->disply();
    PComplex pcom2(&compl);
    pcom2->disply();*/

   /* Point P1(10, 10);
    cout << "P1.area=" << P1.area() << endl;
    Circle C1(10, 10, 20);
    cout << "C1.area=" << C1.area() << endl;*/

    cylinder c(100, 200, 10, 50);
    format* p;
    p = &c;
    p->show();
    cout << "s=" << p->area() << endl;
    circle cir(5, 10, 100);
    format& r = cir;
    r.show();
    system("pause");
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
