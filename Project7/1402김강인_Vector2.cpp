#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Movie {
private:
	string name;
	int score;
public:
	Movie(string _name, int _score) {
		name = _name;
		score = _score;
	}
	~Movie() {}
	void print() {
		cout << name << endl;
		cout << score << endl;
	}
};
int main(void) {
	vector<Movie> v;
	string name;
	int score;
	int count;
	cout << "� �Է�? ";
	cin >> count;
	for (int i = 0; i < count; i++) {
		cout << "��ȭ ����: ";
		cin >> name;
		cout << "��ȭ ����: ";
		cin >> score;

		Movie m(name, score);
		v.push_back(m);
	}
	for (auto& element : v) {
		element.print();
	}
}