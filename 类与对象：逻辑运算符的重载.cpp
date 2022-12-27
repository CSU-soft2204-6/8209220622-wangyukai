#include <iostream>
#include <string>
using namespace std;
class Person {
public:
    Person(string name, int age) {
        m_Name = name;
        m_Age = age;
    }

public:
    //逻辑运算符==和！=的重载
    bool operator==(Person& p) {
        if (this->m_Name == p.m_Name && this->m_Age == p.m_Age) {
            return true;
        }
        return false;
    }

    bool operator!=(Person& p) {
        if (this->m_Name == p.m_Name && this->m_Age == p.m_Age) {
            return false;
        }
        return true;
    }

private:
    string m_Name;
    int m_Age;
};

void test01() {
    Person p1("zhangsan", 18);
    Person p2("zhangsan", 18);
    Person p3("lisi", 18);
    if (p1 == p2) {
        cout << "p1和p2是相等的" << endl;
    }
    else {
        cout<< "p1和p2是不相等的" << endl;
    }

    if (p1 != p3) {
        cout<<"p1和p3是不相等的" << endl;
    }
    else {
        cout<< "p1和p3是相等的" << endl;
    }
}


int main()
{
    test01();
    return 0;
}
