#include<iostream>
using namespace std;
int main()
{
	int a, b;
	char c;
	cout << "输入要计算的数,以及要计算的符号" << endl;
	cin >> a >> b >> c;
	switch (c) {
	case '+':cout << a + b; break;
	case '-':cout << a - b; break;
	case '*':cout << a * b; break;
	case '/':
		if (b == 0) {
			cout << "Divided by zero!";
			break;
		}
		else {
			cout << a / b;
			break;
		}
	default:cout << "Invalid operator!"; break;
	}
	return 0;
}
