#include <iostream>
#include <vector>
#include <Windows.h>
#include <cstdlib>
#include <ctime>

using namespace std;

class Circle {
public:
	int x, y;
	int radius;
	Circle() : x{ 0 }, y{ 0 }, radius{ 0 } {}
	Circle(int x, int y, int r) : x{ x }, y{ y }, radius{ r } {}
	void print() {
		cout << "¹ÝÁö¸§ : " << radius << " @(" << x << ", " << y << ")" << endl;
	}
	void draw() {
		int r = radius / 2;
		HDC hdc = GetWindowDC(GetForegroundWindow());
		Ellipse(hdc, x - r, y - r, x + r, y + r);
	}
};

int main(void) {
	srand(time(NULL));
	vector<Circle> objArray;
	for (int i = 0; i < 10; i++) {
		Circle obj{ rand() % 300, rand() % 300, rand() % 100 };
		objArray.push_back(obj);
	}
	for (Circle c: objArray) {
		c.print();
		return 0;
	}
}