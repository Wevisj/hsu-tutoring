#include <iostream>
#include <string>
using namespace std;

class Integer {
	int n;
public:
	inline Integer(int n) { this->n = n; }
	inline Integer(string n) { this->n = stoi(n); }
	inline int get() { return n; }
	inline int isEven() { if (n % 2 == 0) return 1; else return 0; }
	inline void set(int n) { this->n = n; }
};

int main() {
	Integer n(30);
	cout << n.get() << ' ';
	n.set(50);
	cout << n.get() << ' ';

	Integer m("300");
	cout << m.get() << ' ';
	cout << m.isEven();
}