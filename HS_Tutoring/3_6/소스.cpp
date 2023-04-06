#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class EvenRandom {
public:
	EvenRandom();
	int next();
	int nextInRange(int from, int to);
};

EvenRandom::EvenRandom() {
	srand((unsigned)time(0));
}

int EvenRandom::next() {
	int n = rand() + 1;
	if ((n - 1) % 2 == 0)
		return n - 1;
	else
		return n - 2;
}

int EvenRandom::nextInRange(int from, int to) {
	int n = rand() % (to - from + 1) + from + 1;
	if ((n - 1) % 2 == 0)
		return n - 1;
	else
		return n - 2;
}

int main() {
	EvenRandom r;

	cout << 0 << "부터 " << RAND_MAX << "까지 짝수 10개" << endl;
	for (int i = 0; i < 10; i++)
		cout << r.next() << '\t';
	cout << endl;

	cout << 2 << "부터 " << 10 << "까지 짝수 10개" << endl;
	for (int i = 0; i < 10; i++)
		cout << r.nextInRange(2, 10) << '\t';
	cout << endl;
}