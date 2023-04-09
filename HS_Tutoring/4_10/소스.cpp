#include <iostream>
using namespace std;

class Person {
	string name;
public:
	Person() { }
	Person(string name) { this->name = name; }
	string getName() { return name; }
};

class Family {
	Person* p;
	string name;
	int size;
public:
	Family(string name, int size);
	void setName(int i, string name);
	void show();
	~Family() { delete[] p; }
};

Family::Family(string name, int size) {
	this->name = name;
	this->size = size;
	p = new Person[size];
}


void Family::setName(int i, string name) {
	p[i] = Person(name);
}

void Family::show() {
	cout << name << "������ ������ ���� " << size << "�� �Դϴ�." << endl;
	for (int i = 0; i < size; i++) {
		cout << p[i].getName() << "\t";
	}
	cout << endl;
}

int main() {
	Family* simpson = new Family("Simpson", 3);
	simpson->setName(0, "Mr. Simpson");
	simpson->setName(1, "Mrs. Simpson");
	simpson->setName(2, "Bart Simpson");
	simpson->show();
	delete simpson;
}