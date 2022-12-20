#include <iostream>
using namespace std;
void count(char s[], int counts[]);

int main()
{
    char s[40];
    int counts[26]={0};
    cout << "Enter a string:"<<endl;
    cin >> s;
    count(s, counts);

   /* char str[40] = "welcometonewyork";
    cout << str[1] << endl;
    cout << strlen(str) << endl;
    cout << str[1]-97 << endl;*/
    system("pause");
    return 0;
}
void count(char s[], int counts[]) {

    int i = 0;
    for (i; i < strlen(s); i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
        {
            counts[s[i] - 65] += 1;
        }
        if (s[i] >= 97 && s[i] <= 122)
        {
            counts[s[i] - 97] += 1;
        }
    }
    for (int j = 0; j < 26; j++)
    {
        if (counts[j] != 0) {
            cout << (char)(j+97) << ":" << counts[j]<<" times" << endl;
        }
        
    }
       

}
