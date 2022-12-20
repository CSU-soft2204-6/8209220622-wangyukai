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
	
	cout << "ÊäÈëÔ²×¶µ×µÄ°ë¾¶" << endl;
	cin >> r;
	cout << "ÊäÈëÔ²×¶µÄ¸ß" << endl;
	cin >> h;
	cout << "Ô²×¶Ìå»ýV=" << f(r, h)<<  endl;
	cout << r * h << endl;

}



