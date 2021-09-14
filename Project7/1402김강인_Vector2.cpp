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
	cout << "몇개 입력? ";
	cin >> count;
	for (int i = 0; i < count; i++) {
		cout << "영화 제목: ";
		cin >> name;
		cout << "영화 평점: ";
		cin >> score;

		Movie m(name, score);
		v.push_back(m);
	}
	for (auto& element : v) {
		element.print();
	}
}