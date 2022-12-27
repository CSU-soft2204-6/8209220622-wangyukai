
#include <iostream>
using namespace std;


class Person {
public:
    Person(int age) {
        m_Age = new int(age);
    }

    ~Person()
    {
        if (m_Age != NULL) {
            delete m_Age;
            m_Age = NULL;
        }
    }

public:
    //赋值运算符的重载
    Person& operator=(Person&p) {

        if (this->m_Age != NULL) {
            delete this->m_Age;
            this->m_Age = NULL;
        }

        this->m_Age = new int(*p.m_Age);

        return *this;
    }


public:
    int* m_Age;
};

void test01() {
    Person p1(10);
    Person p2(20);
    p2 = p1;
    cout << "*p1.m_Age=" << *p1.m_Age << endl;
    cout << "*p2.m_Age=" << *p2.m_Age << endl;
}

void test02() {
    Person p3(30);
    Person p4(40);
    Person p5(50);

    p5 = p4 = p3;
    cout << "*p3.m_Age=" << *p3.m_Age << endl;
    cout << "*p4.m_Age=" << *p4.m_Age << endl;
    cout << "*p5.m_Age=" << *p5.m_Age << endl;
}

int main()
{
    test01();
    test02();
    return 0;
}
