
#include <iostream>
using namespace std;
int main()
{
    int a = 1;
    for (int i = 1; i < 10; i++)
    {
        a = 2 * (a + 1);
    }
    cout << "第一天猴子共摘了" << a << "个桃子" << endl;
    return 0;
}

