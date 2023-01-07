#include <iostream>
#include <vector>
#include <string>
using namespace std;

template<typename T>
void showVector(const vector<T>& v) {
	for (int i = 0; i < v.size(); i++) {
		cout << v[i]<<" ";
	}
	cout << endl;
}



template<typename T>
vector<T> intersection(const vector<T>& v1, const vector<T>& v2) {
	
	
	vector<T>v_result;
	
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (v1[j] == v2[i]) {
				v_result.push_back(v1[j]);
			}
		}
	}

	return v_result;

}

int main()
{

	cout << "输入v1的五个元素" << endl;
	vector<string> v1(5);
	for (int i = 0; i < 5; i++) {
		cin >> v1[i];
	}

	cout << "-------------------" << endl;

	cout << "输入v2的五个元素" << endl;
	vector<string> v2(5);
	for (int i = 0; i < 5; i++) {
		cin >> v2[i];
	}


	vector<string>myVec = intersection(v1, v2);

	cout << "交集为:";
	showVector(myVec);
	


	return 0;
}
