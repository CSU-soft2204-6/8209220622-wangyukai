# include <iostream>
#include <iomanip>
using namespace std;
bool is_prime(int num)
{
	for (int i = 2; i<num; i++)
	{
		if (num % i == 0)
		{
			return false ;
		}
		
	}
	return 1;
}
void printNumber(int max, int length)//200，10
{
	int a = 0;//素数的个数
	int b = 2;//从2开始输入判断，依次加1判断
	while (a<max)
	{
		if (is_prime(b))
		{
			a++;
			if (a % length == 0)//每十个换行
			{
				cout << setw(5) << b << endl;
			}
			else
				cout << setw(5) << b;
		}	
		b++;
	}
	
}


int main()
{
	int z = 0;
	cout << "输入一个正整数" << endl;
	cin >> z;
	cout << is_prime(z) << endl;//判断一个数是不是素数

	printNumber(200,10);//打印前200个素数
	system("pause");
	return 0;
}