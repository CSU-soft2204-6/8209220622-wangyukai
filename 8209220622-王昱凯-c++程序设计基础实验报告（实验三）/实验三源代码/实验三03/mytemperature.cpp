#include <iostream>
#include "mytemperature.h"
using namespace std;
double fah = 0;
double cel = 0;
double celsius_to_fah(double cel)
{
	
	fah = cel * 9/ 5 + 32;
	cout << "celsius_to_fah is" << endl;
	return fah;
}

double fahrenheit_to_cels(double fah)
{
	cel = 5 * (fah - 32) / 9;
	cout << "fahrenheit_to_cels is"  << endl;
	return cel;
}