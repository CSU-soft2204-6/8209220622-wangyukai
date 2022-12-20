#include <iostream>
using namespace std;

int main()
{
    bool a[100];
    for (int i = 0; i < 100; i++)
    {
        a[i] = false;
    }
    for (int j = 2; j < 100; j++)
    {
        for (int k = j - 1; k< 100; k =k+j+1)
        {
            if (a[k])
            {
                a[k] = false;
            }
            else
            {
                a[k] = true;
            }
        }
    }
    for (int m = 0; m< 100; m++)
    {
        if (a[m])
        {
            cout << m+ 1 << " ";
        }
        
    }
    cout << endl;
    return 0;
}

