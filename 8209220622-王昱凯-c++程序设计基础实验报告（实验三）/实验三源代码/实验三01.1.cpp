#include<iostream>
using namespace std;
int f(int m,int n)
{
    int t = 1;
    int num1 = m;
    int num2 = n;
    if (m > n) {

        while (t != 0) {
            t = m % n;
            m = n;
            n = t;
        }
        cout << "最大公约数：" << m << endl;
        int b = (num1 * num2) / m;
        cout << "最小公倍数：" << b << endl;

    }
    else if (m < n) {

        while (t != 0) {
            t = n % m;
            n = m;
            m = t;
        }
        cout << "最大公约数：" << n << endl;
        int b = (num1 * num2) / n;
        cout << "最小公倍数：" << b << endl;

    }
    else {
        cout << "最大公约数：" << m << endl;
        cout << "最小公倍数：" << m << endl;
    }
    return 0;
}

int main()
{
    int a = 0;
    int b = 0;
    cout << "输入两个正整数" << endl;
    cin >> a >> b;
    f(a, b);
    return 0;

}