
#include <iostream>
using namespace std;

class Person {
    //friend void operator<<(ostream& cout, Person& p);
    friend ostream& operator<<(ostream& cout, Person& p);

public:
    Person(int a, int b) {
        this->m_A = a;
        this->m_B = b;
    }

private:
    int m_A;
    int m_B;


};

//通过全局函数实现左移运算符的重载（注意：只能用全局函数，不能用成员函数）
//思路：由+运算符的重载：实质operator+（p1,p2)可简化为p1+p2;
//我们希望左移运算符简化后可以写成cout<<p的形式，那么我们的“实质”即operator<<(cout,p)
//在写函数的定义时我们有一个疑问，cout属于什么数据类型？其实cout时ostream这个类的一个对象，就像p时Person类的一个对象
//因此形参列表可写成（ostream&cout,Person&p)


/*
void operator<<(ostream& cout, Person& p) {
    cout << "p.m_A=" << p.m_A << " " << "p.m_B="<<  p.m_B;//报错：因为m_A,m_B为private类型，考虑用友元的知识
}
*/

ostream& operator<<(ostream& cout, Person& p);

void test01() {
    Person p(10,20);//因为m_A,m_B为私有，不能直接访问赋初值，可以通过有参构造赋初值
    cout << p;//实质：operator<<(cout,p)
    //我们发现如果返回值类型为void那么cout<<p<<"hello world"<<endl;会报错
    cout << p << "hello world" << endl;
    cout << "hello world" << " " << p << endl;
    /*为什么呢？这里涉及到链式运算，cout << p运算完后什么都没有返回，紧接着后面又跟了以string类型的"hello world"
    (系统应该是默认的有operator<<(ostream&cout,string a)这个函数)，按照函数应该是cout<<"hello world",由于返回值为空，所以这个函数无法调用
    那么应该如何解决呢？简单，只要函数的返回值是cout不就行了吗,而cout属于ostream类型，再用引用的方式保证全局的唯一性。因此<<运算符重载的正确写法如下：*/
}

ostream& operator<<(ostream& cout, Person& p) {
    cout << "p.m_A=" << p.m_A << " " << "p.m_B="<< p.m_B<<" ";
    return cout;
}

int main()
{
    test01();
    return 0;
}

