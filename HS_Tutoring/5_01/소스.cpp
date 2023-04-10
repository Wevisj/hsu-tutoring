#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int r) { radius = r; }
	double getArea() { return 3.14 * radius * radius; }
};

void swap(Circle &circle1, Circle &circle2) {
	Circle temp = circle1;
	circle1 = circle2;
	circle2 = temp;
}

int main() {
	Circle circle1(1);
	Circle circle2(2);
	swap(circle1, circle2);
	cout << circle1.getArea() << ' ' << circle2.getArea() << endl;
}