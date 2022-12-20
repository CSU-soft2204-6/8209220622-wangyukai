

#include <iostream>
#include "mytemperature.h"
using namespace std;
int main()
{
    cout << "输入摄氏温度" << endl;
    double cel = 0;
    cin >> cel;
    cout<<celsius_to_fah(cel)<<endl;
    cout << "输入华氏温度" << endl;
    double fah = 0;
    cin >> fah;
    cout<< fahrenheit_to_cels(fah) << endl;
    return 0;
}

