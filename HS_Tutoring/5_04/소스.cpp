#include <iostream>
using namespace std;

bool bigger(int a, int b, int& big) {
	big = a > b ? a : b;
	if (a == b)
		return true;
	else
		return false;
}

int main() {
	int a = 3, b = 7, big;
	if (bigger(a, b, big))
		cout << "a와 b는 같습니다." << endl;
	else
		cout << "a와 b는 같지 않습니다." << endl;
	cout << big;
}