#include <iostream>
#include "Calculator.h"
using namespace std;

int main() {
	int num1, num2;
	char op;
	Add a;
	Sub s;
	Mul m;
	Div d;
	while (true) {
		cout << "�� ������ �����ڸ� �Է��ϼ���>>";
		cin >> num1 >> num2 >> op;
		switch (op) {
		case '+':
			a.setValue(num1, num2);
			cout << a.calculate() << endl;
			break;
		case '-':
			s.setValue(num1, num2);
			cout << s.calculate() << endl;
			break;
		case '*':
			m.setValue(num1, num2);
			cout << m.calculate() << endl;
			break;
		case '/':
			d.setValue(num1, num2);
			cout << d.calculate() << endl;
			break;
		}
	}
}