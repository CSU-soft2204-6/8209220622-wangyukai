#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float x;
	float y;
	cout << "������x��ֵ,x�ķ�ΧΪ��0��10��" << endl;
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
		cout << "x���ڶ�������" << endl;
	}
	return 0;
}