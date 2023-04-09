#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main() {
	string str;
	char word;
	int n;
	cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다)" << endl;
	while (true) {
		srand((unsigned)time(0));
		cout << ">>";
		getline(cin, str);
		if (str == "exit")
			break;
		n = rand() % str.length();
		while (true) {
			word = (char)(rand() % 26 + 97);
			if (str[n] != word) {
				str[n] = word;
				break;
			}
		}
		cout << str << endl;
	}
}