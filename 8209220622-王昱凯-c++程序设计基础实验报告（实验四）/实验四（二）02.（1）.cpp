#include <iostream>
#include <string>
using namespace std;
int indexof(const char* s1, const char* s2);

int main()
{
    char s1[40];
    char s2[40];

	cout << "�����ַ���1" << endl;
    cin >> s1;
    cout << "�����ַ���2" << endl;
    cin >> s2;

    cout << indexof(s1, s2) << endl;
}

int indexof(const char* s1,const char*s2) 
{
    // �մ����κ��ַ������Ӵ�
    if (s1[0] == 0) 
    {
        return 0;
    }
    else 
    {
        for (int i = 0; s2[i]; i++)
        {
            int k = i, j = 0;
            // k��ʾs2��ǰ������λ�ã�j��ʾs1��ǰ������λ��
            for (; s1[j]; ++k, ++j) 
            {
                // һ���в���ͬ������ѭ��
                if (s2[k] != s1[j])
                {
                    break;
                }
            }
            // ����Ѿ���������s1��������ѭ��
            if (s1[j] == 0) {
                // �����ʼ��s2����ʼλ��
                return i;
            }
        }
        return -1;
    }
}
