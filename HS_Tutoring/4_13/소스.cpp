#include <iostream>
using namespace std;

class Histogram {
	string str;
public:
	Histogram(string str) { this->str = str + "\n"; }
	void put(string str) { this->str.append(str); }
	void putc(char c) { this->str += c; }
	void print();
};

void Histogram::print() {
	cout << str << endl;
	int len = str.length(), ans, not_a = 0;
	for (int i = 0; i < len; i++) {
		if (65 <= int(str[i]) && int(str[i]) <= 90)
			continue;
		else if (97 <= int(str[i]) && int(str[i]) <= 122)
			continue;
		else
			not_a++;
	}
	cout << endl << "ÃÑ ¾ËÆÄºª ¼ö " << len - not_a << endl << endl;
	for (int i = 97; i <= 122; i++) {
		ans = 0;
		for (int j = 0; j < len; j++) {
			if ((char)i == str[j] || (char)i - 32 == str[j])
				ans += 1;
		}
		cout << (char)i << " (" << ans << ")\t: ";
		for (int k = 0; k < ans; k++) {
			cout << '*';
		}
		cout << endl;
	}
}

int main() {
	Histogram elvisHisto("Wise men say, only fools rush in But i can't help, ");
	elvisHisto.put("falling in love with you");
	elvisHisto.putc('-');
	elvisHisto.put("Elvis Presley");
	elvisHisto.print();
}