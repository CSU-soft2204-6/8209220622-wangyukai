#include<iostream>
using namespace std;
int main()
{
    int t = 1;
    int m, n;
    cin >> m >> n;
    int num1 = m;
    int num2 = n;
    if (m > n) {

        while (t != 0) {
            t = m % n; 
            m = n;   
            n = t;
        }
        cout << "���Լ����" << m << endl;
        int b = (num1 * num2) / m;
        cout << "��С��������" << b << endl;

    }
    else if (m < n) {

        while (t != 0) {
            t = n % m; 
            n = m;  
            m = t;
        }
        cout << "���Լ����" << n << endl;
        int b = (num1 * num2) / n;
        cout << "��С��������" << b << endl;

    }
    else {
        cout << "���Լ����" << m << endl;
        cout << "��С��������" << m << endl;
    }

}
