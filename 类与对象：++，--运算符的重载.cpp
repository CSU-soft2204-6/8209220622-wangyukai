/*系统内置++，--的运算规则
int a=0;
cout<<++a<<end;结果：1//这一句话其实是两个操作:先进行a=a+1，再进行cout<<a<<endl;
cout<<a<<endl;结果：1//

int b=0;
cout<<b++<<endl;结果：0//这一句话其实是两个操作:先进行cout<<b<<endl，再进行b=b+1;
cout<<b<<endl;结果：1
*/

#include <iostream>
using namespace std;

class MyInt {
	friend ostream& operator<<(ostream& cout, MyInt myint);


public:
	MyInt() {
		m_int = 0;
	}

	//前置++运算符重载
	MyInt& operator++() {
		this->m_int++;
		return *this;
	}

	//后置++运算符重载
	MyInt operator++(int) {//()内的int为占位参数，为了与前置++区分开
		MyInt temp = *this;
		this->m_int++;
		return temp;
	}
private:
	int m_int;
};

//<<运算符重载
ostream& operator<<(ostream& cout, MyInt myint) {
	cout << myint.m_int;
	return cout;
}

void test01() {
	MyInt myint;
	cout << ++myint << endl;
	cout << ++(++myint) << endl;
	cout << myint << endl;
}

void test02() {
	MyInt myint2;
	cout << myint2++ << endl;
	cout << (myint2++)++ << endl;
	cout << myint2 << endl;
}

int main()
{
	test01();
	test02();
	return 0;
}
