#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	int index = 0, ans = 0;
	cout << "���ڿ� �Է�>> ";
	getline(cin, str);
	while (true) {
		if (str.find('a', index) == string::npos)
			break;
		index = str.find('a', index) + 1;
		ans++;
	}
	cout << "���� a�� " << ans << "�� �ֽ��ϴ�." << endl;
}