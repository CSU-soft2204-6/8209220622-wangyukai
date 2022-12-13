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
      friend Complex operator +(Complex A, Complex B) {
          return Complex(A.real + B.real, A.image + B.image);
      }
      friend Complex operator ++(Complex& A) {
          return Complex(++A.real,A.image);
      }
      friend Complex operator ++(Complex& A ,int) {
          return Complex(++A.real, A.image);
      }
};
int main(double sid1,double sid2,double sid3)
{
    Complex comp1;
    comp1.real=1.0;
    comp1.image = 1.0;
    comp1.disply();

    Complex comp2(2.0,2.0);
    comp2.disply();
    Complex comp3 = comp1 + comp2;
    comp3.disply();
    Complex comp4 = comp3++;
    
    comp4.disply();
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
