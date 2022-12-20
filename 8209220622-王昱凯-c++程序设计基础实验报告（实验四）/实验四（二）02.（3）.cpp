#include <iostream>
using namespace std;
void f(int* p, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (p[j] > p[j + 1])
            {
                int temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }
}

void show(int* p, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << p[i] << '\t';
    }
}

int main()
{
    int size = 1;
    cout << "输入元素个数" << endl;
    cin >> size;
    cout << "输入数组元素" << endl;
    int* p = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> p[i];
    }
    f(p, size);
    show(p, size);
    delete[]p;
}

