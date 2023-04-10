#include <iostream>
using namespace std;

class Circle {
	int radius;
	string name;
public:
	void setCircle(string name, int radius) { this->name = name; this->radius = radius; }
	double getArea() { return radius * radius * 3.14; }
	string getName() { return name; }
};

class CircleManager {
	Circle* p;
	int size;
public:
	CircleManager(int size);
	~CircleManager() { delete[] p; }
	void searchByName();
	void searchByArea();
};

CircleManager::CircleManager(int size) {
	string name;
	int r;
	p = new Circle[size];
	for (int i = 0; i < size; i++) {
		cout << "�� " << i + 1 << "�� �̸��� ������ >> ";
		cin >> name >> r;
		p[i].setCircle(name, r);
	}
}

void CircleManager::searchByName() {
	string name;
	cout << "�˻��ϰ��� �ϴ� ���� �̸� >> ";
	cin >> name;
	for (int i = 0; i < size; i++) {
		if (p[i].getName() == name) {
			cout << name << "�� ������ " << p[i].getArea() << endl;
		}
	}
}

void CircleManager::searchByArea() {
	int area;
	cout << "�ּ� ������ ������ �Է��ϼ��� >> ";
	cin >> area;
	cout << area << "���� ū ���� �˻��մϴ�." << endl;
	for (int i = 0; i < size; i++) {
		if (p[i].getArea() > area) {
			cout << p[i].getName() << "�� ������ " << p[i].getArea() << ",";
		}
	}
}

int main() {
	int size;
	cout << "���� ���� >> ";
	cin >> size;
	CircleManager circleManager(size);
	circleManager.searchByName();
	circleManager.searchByArea();
}