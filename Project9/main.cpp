#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v;
	int count = 0,user_input = 0,max = 0,min = 0;

	cout << "정수의 갯수: ";
	cin >> count;
	for (int i = 0; i < count; i++) {
		cout << "정수를 입력하세요: ";
		cin >> user_input;
		v.push_back(user_input);
	}
	//cout << v.size();
	for (auto& element : v) {
		cout << element << endl;
	}
	max = v[0];
	min = v[0];
	for (auto& i : v) {
		if (max < i) {
			max = i;
		}
		else if (min > i) {
			min = i;
		}
	}
	cout << "최댓값: " << max << endl;
	cout << "최솟값: " << min << endl;
}