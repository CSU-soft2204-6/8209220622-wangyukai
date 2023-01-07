#include <iostream>
using namespace std;
class Time {
public:
	void setTime(int hour, int minute, int sec) {
		this->hour = hour;
		this->minute = minute;
		this->sec = sec;
	}

	int getTime() {
		cout << "hour: " << this->hour << " minute: " << this->minute  << " sec: " << this->sec << endl;
		return 0;
	}


private:
	int hour;
	int minute;
	int sec;
};

int main()
{
	Time t1;
	t1.setTime(12, 22, 22);
	t1.getTime();

	return 0;
}


/*
1.函数成员应指定为共有的
2.属性成员应指定为私有的
3.将与具体实现无关的函数放在class里面实现；
与具体实现有关的函数放在别的地方实现，在class里只给出声明
*/