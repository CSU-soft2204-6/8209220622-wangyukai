// 1.3上课.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#pragma warning(disable : 4996)
#include<vector>
using namespace std;
int main()
{
    const char*cr ="12345";
    //cout <<cr << endl;
    std::string str("123456789");
    cout << str << endl;
    std::string str1(cr, 3);
    cout << str1 << endl;
    std::string str2(10, '5');
    cout << str2 << endl;
    cout << str2.size() << str2.length() << endl;
    str2.append(str,3,2);
    cout << str2 << endl;
    str2.assign(str, 3, 3);
    str2.assign("123456789");
    cout << str2 << endl;
    cout << str2.compare(str) << endl;
    str2.insert(3, str, 3, 3);
    string str3=str2.substr(3, 3);
    cout << str3 << endl;
    cout << str2.find("456") << endl;
    cout << str3 << endl;
    str3.replace(0, 1, str2);
    cout << str3 << endl;
    //cout << str2 << endl;
    str3.swap(str2);
    cout << str3 << endl;
    str3 += str2;
    cout << str3 << endl;
    cout << (str3 == str2) << endl;
    cout << str3[3] << endl;
    string::iterator it;
    for (it = str3.begin(); it != str3.end(); it++) {
        cout << *it << endl;
    }
    char* cr1= new char[10];
    strcpy(cr1, "1234567");
    str3.copy(cr1, 5, 1);
    //str3.copy(cr, 5, 1);
    cr = str3.c_str();
    cr = str3.data();//不要用，和c_str的区别是c_str结尾有'\0'结尾符，而data没有
    cout << str3 << endl;


    auto a = 123456;
    auto b = 123456.0;
    auto c = "123456";
    auto d = '1234';
    auto e = new int[10];
    std::vector<int>az;
    char* cr2 = nullptr;//取代null
    for (int i = 0; i < 10; i++) {
        az.push_back(0);
    }

    for (int i = 0; i < 10; i++) {
        cout << az[i] << endl;
    }

    
    for (auto i : az) {
        cout << i << endl;
    }

    int bz[10]={0};
    for (auto i : bz) {
        cout << i << endl;
    }

    return 0;

}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
