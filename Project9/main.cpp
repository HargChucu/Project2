#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v;
	int count = 0,user_input = 0,max = 0,min = 0;

	cout << "������ ����: ";
	cin >> count;
	for (int i = 0; i < count; i++) {
		cout << "������ �Է��ϼ���: ";
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
	cout << "�ִ�: " << max << endl;
	cout << "�ּڰ�: " << min << endl;
}