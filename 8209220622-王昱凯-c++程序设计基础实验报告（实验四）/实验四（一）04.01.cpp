#include <iostream>
using namespace std;

void merge(int list1[], int size1, int list2[], int size2, int list3[]);
int main()
{
    int list1[80];
    int list2[80];
    int list3[80];
    int size1, size2;
    cout << "����ϳ��������Ԫ�ظ�����";
    cin >> size1;
    cout << "����϶̵������Ԫ�ظ�����";
    cin >> size2;
    cout << "�������������нϳ�������" << endl;
    for (int i = 0; i < size1; i++)
    {
        cin >> list1[i];
    }cout << "�������������н϶̵�����" << endl;
    for (int i = 0; i < size2; i++)
    {
        cin >> list2[i];
    }
    merge(list1, size1, list2, size2, list3);


    system("pause");
    return 0;
}
void merge(int list1[], int size1, int list2[], int size2, int list3[])
{
    for (int i = 0; i < size1; i++)
    {
        list3[i] = list1[i];
    }
    for (int j = 0; j < size2 ; j++)
    {
        list3[j+size1] = list2[j];
    }
    //ð������

    for (int i = 0; i < size1+size2; i++)
    {
        for (int j = 0; j < size1+size2 - i-1; j++)
        {
            if (list3[j] > list3[j + 1])
            {
                int temp = 0;
                temp = list3[j];
                list3[j] = list3[j + 1];
                list3[j + 1] = temp;
            }
        }
    }
   

    cout << "�����";
    for (int k = 0; k <( size1 + size2); k++)
    {
        cout << list3[k] << '\t';
    }
}