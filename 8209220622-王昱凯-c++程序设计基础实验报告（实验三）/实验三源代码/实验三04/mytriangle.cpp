#include <iostream>
#include <cmath>
#include "mytriangle.h"
bool is_valid(double side1, double side2, double side3)
{
	if (side1 + side2 > side3 && side1 + side3 > side2)
	{
		cout << "三角形的面积为" << area(side1, side2, side3) << endl;
		return 0;
	}
	cout << "发生错误，无法构成三角形" << endl;
	return 0;
}

double area(double side1, double side2, double side3)
{
	double s = (side1 + side2 + side3) / 2;
	double z = sqrt(s*(s - side1)*(s - side2)*(s - side3));
	return z;
}