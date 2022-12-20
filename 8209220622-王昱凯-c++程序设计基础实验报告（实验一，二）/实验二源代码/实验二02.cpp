#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float x;
	float y;
	cout << "请输入x的值,x的范围为（0，10）" << endl;
	cin >> x;
	if (x>0&&x<1)
	{
		y = 3- 2*x;
		cout << y << endl;
	}
	else if (x>=1&&x<5)
	{
		y = 2 / 4.0 * x + 1;
			cout << y << endl;
	}
	else if (x>=5&&x<10)
	{
		y = pow(x,2);
		cout << y << endl;
	}
	else
	{
		cout << "x不在定义域内" << endl;
	}
	return 0;
}