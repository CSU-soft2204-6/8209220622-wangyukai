#include <iostream>
using namespace std;
int main()
{
	char ch;
	cout << "������һ���ַ�" << endl;
	cin >> ch;
	if (ch >= 'a' && ch <= 'z')
	{
		char CH = ch - 32;
		cout << CH<< endl;
	}
	else
		cout << ch << endl;
	return 0;
}
