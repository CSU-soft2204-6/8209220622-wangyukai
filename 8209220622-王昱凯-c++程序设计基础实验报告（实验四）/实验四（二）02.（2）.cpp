
#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int parseHex(const char* const hexString);

int main()
{
	int size = 999;
	char s[40];
	cout << "请输入一个以字符串形式表示的十六进制数"<<endl;
	cin>>s;
	cout << "转化为10进制数为" << parseHex(s) << endl;

	return 0;
}

int parseHex(const char* const hexString)
{
	int a, sum = 0;
	a = strlen(hexString);
	int list[40];
	for (int i = 0; i < a; i++)
	{
		if (hexString[i] >= 'A' && hexString[i] <= 'F')
			list[i] = (static_cast<int>(hexString[i]) - 55) * (pow(16, a - 1 - i));
		else
			list[i] = (hexString[i] - 48) * pow(16, a - i - 1);
		sum = sum + list[i];
	}
	return sum;
}
