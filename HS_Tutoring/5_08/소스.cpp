#include <iostream>
using namespace std;

class MyIntStack {
	int* p;
	int size;
	int tos;
public:
	MyIntStack() { }
	MyIntStack(int size) { this->size = size; p = new int[size]; tos = 0; }
	MyIntStack(const MyIntStack& s) { p = s.p; size = s.size; tos = s.tos; }
	~MyIntStack() { }
	bool push(int n);
	bool pop(int& n);
};

bool MyIntStack::push(int n) {
	if (tos != 10) {
		p[tos] = n;
		tos++;
		return true;
	}
	else
		return false;
}

bool MyIntStack::pop(int& n) {
	if (tos != 0) {
		tos--;
		n = p[tos];
		return true;
	}
	else
		return false;
}

int main() {
	MyIntStack a(10);
	a.push(10);
	a.push(20);
	MyIntStack b(a);
	b.push(30);

	int n;
	a.pop(n);
	cout << "스택 a에서 팝한 값 " << n << endl;
	b.pop(n);
	cout << "스택 b에서 팝한 값 " << n << endl;
}