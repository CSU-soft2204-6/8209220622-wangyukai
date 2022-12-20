#include <iostream>
using namespace std;

void merge(int list1[], int size1, int list2[], int size2, int list3[]);
int main()
{
    int list1[80];
    int list2[80];
    int list3[80];
    int size1, size2;
    cout << "输入较长的数组的元素个数：";
    cin >> size1;
    cout << "输入较短的数组的元素个数：";
    cin >> size2;
    cout << "输入俩个数组中较长的数组" << endl;
    for (int i = 0; i < size1; i++)
    {
        cin >> list1[i];
    }cout << "输入俩个数组中较短的数组" << endl;
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
    //冒泡排序

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
   

    cout << "排序后：";
    for (int k = 0; k <( size1 + size2); k++)
    {
        cout << list3[k] << '\t';
    }
}