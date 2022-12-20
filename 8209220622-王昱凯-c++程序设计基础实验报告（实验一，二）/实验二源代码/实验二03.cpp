#include <iostream>
using namespace std;
int main()
{
	float a;
	float b;
	float c;
	cout << "输入三个数字" << endl;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		if(a!=b&&a!=c&&b!=c)
		{
			cout << "可以构成一个不特殊的三角形" << endl;
		}
		else if(a==b&&b==c)
		{
			cout << "构成一个等边三角形" << endl;
		}
		else if(((a==b)&&a!=c)||((a==c)&&a!=b)||((b==c)&&a!=b))
		{
			cout << "构成一个等腰三角形" << endl;
		}

	}
	else
	{
		cout << "无法构成三角形" << endl;
	}

		return 0;
}