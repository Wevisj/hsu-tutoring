#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	int index = 0, ans = 0;
	cout << "문자열 입력>> ";
	getline(cin, str);
	while (true) {
		if (str.find('a', index) == string::npos)
			break;
		index = str.find('a', index) + 1;
		ans++;
	}
	cout << "문자 a는 " << ans << "개 있습니다." << endl;
}