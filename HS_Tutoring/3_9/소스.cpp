#include <iostream>
using namespace std;

class Oval {
private:
	int width, height;
public:
	Oval(int width, int height);
	Oval();
	~Oval();
	int getWidth();
	int getHeight();
	void set(int w, int h);
	void show();
};

Oval::Oval(int width, int height) {
	this->width = width;
	this->height = height;
}

Oval::Oval() {
	width = height = 1;
}

Oval::~Oval() {
	cout << "Oval ¼Ò¸ê : width = " << width << ", height = " << height << endl;
}

int Oval::getWidth() {
	return width;
}

int Oval::getHeight() {
	return height;
}

void Oval::set(int w, int h) {
	this->width = w;
	this->height = h;
}

void Oval::show() {
	cout << width << ", " << height << endl;
}

int main() {
	Oval a, b(3, 4);
	a.set(10, 20);
	a.show();
	cout << b.getWidth() << ", " << b.getHeight() << endl;
}