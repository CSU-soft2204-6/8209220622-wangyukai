#include <iostream>
using namespace std;
int main()
{
	float a;
	float b;
	float c;
	cout << "������������" << endl;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		if(a!=b&&a!=c&&b!=c)
		{
			cout << "���Թ���һ���������������" << endl;
		}
		else if(a==b&&b==c)
		{
			cout << "����һ���ȱ�������" << endl;
		}
		else if(((a==b)&&a!=c)||((a==c)&&a!=b)||((b==c)&&a!=b))
		{
			cout << "����һ������������" << endl;
		}

	}
	else
	{
		cout << "�޷�����������" << endl;
	}

		return 0;
}