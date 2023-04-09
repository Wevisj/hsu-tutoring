#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	void setRadius(int radius);
	double getArea();
};

void Circle::setRadius(int radius) {
	this->radius = radius;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle circles[3];
	int r, ans = 0;
	for (int i = 0; i < 3; i++) {
		cout << "�� " << i + 1 << "�� ������ >> ";
		cin >> r;
		circles[i].setRadius(r);
		if (circles[i].getArea() > 100)
			ans += 1;
	}
	cout << "������ 100���� ū ���� " << ans << "�� �Դϴ�" << endl;
}