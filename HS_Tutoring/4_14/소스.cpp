#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <ctime>
using namespace std;

class Player {
	string name;
public:
	Player() { }
	Player(string name) { this->name = name; }
	string getName() { return name; }
};

class GamblingGame {
	int a, b, c;
	Player* p;
public:
	GamblingGame() { p = new Player[2]; }
	~GamblingGame() { delete[] p; }
	void run();
	void getName();
	void roll();
	bool isSame() { if (a == b && b == c) return true; else return false; }
};

void GamblingGame::roll() {
	srand((unsigned)time(0));
	a = rand() % 3;
	b = rand() % 3;
	c = rand() % 3;
	cout << "\t\t" << a << '\t' << b << '\t' << c << '\t';
}

void GamblingGame::getName() {
	string name;
	cout << "ù��° ���� �̸�>>";
	cin >> name;
	p[0] = Player(name);
	cout << "�ι�° ���� �̸�>>";
	cin >> name;
	p[1] = Player(name);
}

void GamblingGame::run() {
	int n = 0;
	char key;
	cout << "***** ���� ������ �����մϴ�. *****" << endl;
	getName();
	while (true) {
		if (n % 2 == 0) {
			cout << p[0].getName() << ":<Enter>" << endl;
			key = _getch();
			if ((int)key == 13) {
				roll();
				if (isSame()) {
					cout << p[0].getName() << "�� �¸�!!" << endl;
					exit(0);
				}
				else
					cout << "�ƽ�����!" << endl;
			}
		}
		else {
			cout << p[1].getName() << ":<Enter>" << endl;
			key = _getch();
			if ((int)key == 13) {
				roll();
				if (isSame()) {
					cout << p[1].getName() << "�� �¸�!!" << endl;
					exit(0);
				}
				else
					cout << "�ƽ�����!" << endl;
			}
		}
	}
}

int main() {
	GamblingGame game;
	game.run();
}