
#include <iostream>
#include<iomanip>
using namespace std;
void bubblesort(double* a)
{
    for (int i = 0; i < 10;  i++)
    {
        for (int j = 0; j < 10 - i - 1; j++)
        {
            double temp;
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
           
    }

}

void f(double*a)
{
    cout << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] <<setw(5);
    }
}

int main()
{
    cout << "输入十个数" << endl;
    double a[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    bubblesort(a);
    f(a);

    return 0;
}

