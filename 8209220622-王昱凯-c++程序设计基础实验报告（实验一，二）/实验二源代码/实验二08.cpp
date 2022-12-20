#include<iostream>
#include<cmath> 
using namespace std;
int main()
{
	double x0, x1, n;
	cin >> n;
	x0 = n / 2;
	x1 = x0 - (x0 * x0 - n) / (2 * x0);
	while (abs(x0 - x1) >= 10e-9) //abs是指取绝对值的意思
	{
		x0 = x1;
		x1 = x0 - (x0 * x0 - n) / (2 * x0);
	}
	cout << x1;
	return 0;
}
