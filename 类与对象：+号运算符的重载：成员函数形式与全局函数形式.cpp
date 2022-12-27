/*#include <iostream>
using namespace std;
class Person {

public:
    //成员函数实现+重载
    Person operator+(Person& p) {
        Person temp;
        temp.m_A = this->m_A + p.m_A;
        temp.m_B = this->m_B + p.m_B;
        return temp;
    }
public:
    int m_A;
    int m_B;
};

void test01() {
    Person p1;
    p1.m_A = 10;
    p1.m_B = 20;

    Person p2;
    p2.m_A = 30;
    p2.m_B = 40;

    Person p3;
    //p3=p1.operator+(p2);调用成员函数operator+的形式实现p1+p2
    p3 = p1 + p2;
    cout << "p3.m_A=" << p3.m_A << " " << "p3.m_B=" << p3.m_B << endl;
}



int main()
{
    test01();
    return 0;
}
*/
