#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Contact {
private:
	string name;
	string address;
	int phoneNum;
public:
	Contact(string _name, string _address) {
		name = _name;
		address = _address;
	}
	~Contact() {}
	string getName() {
		return name;
	}
};

int main() {
	string name;
	string address;
	int phoneNum;
	int select;
	vector<string> na;
	vector<string> add;
	vector<int> phone;
	while (1) {
		cout << "추가(1) / 탐색(2) : ";
		cin >> select;
		if (select == 2) {
			cout << "탐색하고 싶은 이름을 입력하시오 : ";
			cin >> name;
			for (int i = 0; i < na.size(); i++) {
				if (name == na[i]) {
					cout << "전화번호 : " << phone[i];
				}
				else {
					cout << "해당 연락처가 존재하지 않습니다.";
				}
			}
			break;
		}
		cout << "이름을 입력하시오 : ";
		cin >> name;
		na.push_back(name);
		cout << "전화번호를 입력하시오 : ";
		cin >> phoneNum;
		phone.push_back(phoneNum);
		cout << "주소를 입력하시오 : ";
		cin >> address;
		add.push_back(address);
	}
}