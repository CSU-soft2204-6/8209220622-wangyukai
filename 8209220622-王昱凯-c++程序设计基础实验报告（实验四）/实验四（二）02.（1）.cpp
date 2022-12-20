#include <iostream>
#include <string>
using namespace std;
int indexof(const char* s1, const char* s2);

int main()
{
    char s1[40];
    char s2[40];

	cout << "输入字符串1" << endl;
    cin >> s1;
    cout << "输入字符串2" << endl;
    cin >> s2;

    cout << indexof(s1, s2) << endl;
}

int indexof(const char* s1,const char*s2) 
{
    // 空串是任何字符串的子串
    if (s1[0] == 0) 
    {
        return 0;
    }
    else 
    {
        for (int i = 0; s2[i]; i++)
        {
            int k = i, j = 0;
            // k表示s2当前遍历的位置，j表示s1当前遍历的位置
            for (; s1[j]; ++k, ++j) 
            {
                // 一旦有不相同，跳出循环
                if (s2[k] != s1[j])
                {
                    break;
                }
            }
            // 如果已经遍历完了s1才跳出的循环
            if (s1[j] == 0) {
                // 返回最开始的s2的起始位置
                return i;
            }
        }
        return -1;
    }
}
