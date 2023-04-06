#include <iostream>
#include <cstdlib>
using namespace std;

class Random { // Ŭ���� �����
public:
	Random();
	int next(); // 0 ~ RAND_MAX
	int nextInRange(int start, int end);
};

Random::Random() {
	srand((unsigned)time(0));
}

int Random::next() {
	int n = rand();
	return n;
}

int Random::nextInRange(int start, int end) {
	int n = rand() % (end - start + 1) + start;
	return n;
}


int main() {
	Random r;

	cout << 0 << "���� " << RAND_MAX << "���� 10��" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << '\t';
	}
	cout << endl;

	cout << 2 << "���� " << 4 << "���� 10��" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 4);
		cout << n << '\t';
	}
	cout << endl;
}