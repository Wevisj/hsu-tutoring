#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main() {
	string str;
	char word;
	int n;
	cout << "�Ʒ��� �� ���� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�)" << endl;
	while (true) {
		srand((unsigned)time(0));
		cout << ">>";
		getline(cin, str);
		if (str == "exit"){
			break;
		}
		n = str.length();
		for (int i = n - 1; i > -1; i--) {
			cout << str[i];
		}
		cout << endl;
	}
}