#include <iostream>
#include <cmath>
using namespace std;
const float PI = 3.14;

float f(float a, float b)
{
	float c;
		c= 1.0 / 3.0* pow(a, 2) * b * PI;
		return c;
}


int main()
{
	float r;
	float h;
	
	cout << "����Բ׶�׵İ뾶" << endl;
	cin >> r;
	cout << "����Բ׶�ĸ�" << endl;
	cin >> h;
	cout << "Բ׶���V=" << f(r, h)<<  endl;
	cout << r * h << endl;

}



