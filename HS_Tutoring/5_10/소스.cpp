#include <iostream>
using namespace std;

class Buffer {
	string text;
public:
	Buffer(string text) { this->text = text; }
	void add(string next) { text += next; }
	void print() { cout << text << endl; }
};

Buffer& append(Buffer& a, string str) {
	a.add(str);
	return a;
}

int main() {
	Buffer buf("Hello");
	Buffer& temp = append(buf, "Guys");
	temp.print();
	buf.print();
}