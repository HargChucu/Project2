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
		cout << "�߰�(1) / Ž��(2) : ";
		cin >> select;
		if (select == 2) {
			cout << "Ž���ϰ� ���� �̸��� �Է��Ͻÿ� : ";
			cin >> name;
			for (int i = 0; i < na.size(); i++) {
				if (name == na[i]) {
					cout << "��ȭ��ȣ : " << phone[i];
				}
				else {
					cout << "�ش� ����ó�� �������� �ʽ��ϴ�.";
				}
			}
			break;
		}
		cout << "�̸��� �Է��Ͻÿ� : ";
		cin >> name;
		na.push_back(name);
		cout << "��ȭ��ȣ�� �Է��Ͻÿ� : ";
		cin >> phoneNum;
		phone.push_back(phoneNum);
		cout << "�ּҸ� �Է��Ͻÿ� : ";
		cin >> address;
		add.push_back(address);
	}
}