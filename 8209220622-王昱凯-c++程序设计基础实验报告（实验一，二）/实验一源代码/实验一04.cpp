//1.4
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	unsigned int testUnint = 65534;//0xfffe
	cout << "output in unsigned int type:" << testUnint << endl;//<<oct;
	cout << "output in char type:" << static_cast<char>(testUnint) << endl;//用static_cast进行强制类型转化
	cout << "output in short type:" << static_cast<short>(testUnint) << endl; //为什么结果为-2？发生溢出
	cout << "output in int type:" << static_cast<int> (testUnint) << endl;
	cout << "output in double type:" << static_cast<double>(testUnint) << endl;
	cout << "output in double type:" << setprecision(4) << static_cast<double>(testUnint) << endl;//setprecision控制浮点数有效位数
	cout << "output in Hex unsigned int type:" << hex << testUnint << endl; //16 进 制 输 出
	cout << "output in Oct unsigned int type:" << oct<< testUnint << endl;//8进制输出
	system("pause");
	return 0;
}