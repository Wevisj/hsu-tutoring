#include <iostream>
using namespace std;

int main() {
	int sum = 0;
	int* numbers = new int[5];
	cout << "���� 5�� �Է�>> ";
	for (int i = 0; i < 5; i++) {
		cin >> numbers[i];
		sum += numbers[i];
	}
	double avg = (double)sum / 5;
	cout << avg << endl;
	delete[] numbers;
}