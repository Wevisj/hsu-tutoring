#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class SelectableRandom {
private:
	bool type;
public:
	SelectableRandom(bool even);
	int next();
	int nextInRange(int from, int to);
};

SelectableRandom::SelectableRandom(bool even) {
	srand((unsigned)time(0));
	type = even;
}

int SelectableRandom::next() {
	if (type) { // ¦���� �߻��ϵ���
		int n = rand() + 1;
		if ((n - 1) % 2 == 0)
			return n - 1;
		else
			return n - 2;
	}
	else { // Ȧ���� �߻��ϵ���
		int n = rand();
		if (n % 2 != 0)
			return n;
		else
			return n + 1;
	}
}

int SelectableRandom::nextInRange(int from, int to) {
	if (type) { // ¦���� �߻��ϵ���
		int n = rand() % (to - from + 1) + from + 1;
		if ((n - 1) % 2 == 0)
			return n - 1;
		else
			return n - 2;
	}
	else { // Ȧ���� �߻��ϵ���
		int n = rand() % (to - from + 1) + from;
		if (n % 2 != 0)
			return n;
		else
			if (n - 1 < from)
				return n + 1;
			else
				return n - 1;
	}
}

int main() {
	SelectableRandom evenR1(true);
	SelectableRandom evenR2(false);

	cout << 0 << "���� " << RAND_MAX << "���� ¦�� 10��" << endl;
	for (int i = 0; i < 10; i++)
		cout << evenR1.next() << '\t';
	cout << endl;

	cout << 2 << "���� " << 4 << "���� Ȧ�� 10��" << endl;
	for (int i = 0; i < 10; i++)
		cout << evenR2.nextInRange(2, 4) << '\t';
	cout << endl;
}