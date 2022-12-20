#include <iostream>
using namespace std;
int main()
{
	float p = 0.8;//每个0.8元
	int a = 2;//第一天2个
	int i = 0;//计天数
	double num=0;//计苹果数
	double sum;//计钱数
	double x;
	for (; num <62; a = a * 2)
	{
		num = num + a;
		i++;
	}
	
	sum = num * 0.8;
	x = sum / i;
	cout << "每天平均花" << x << "元" << endl;
	return 0;
}