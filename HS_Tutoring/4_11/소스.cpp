#include <iostream>
using namespace std;

class Container {
	int size;
public:
	Container() { size = 10; }
	void fill() { size = 10; }
	void consume() { if (size == 0) cout << "���ᰡ �����մϴ�." << endl; else size -= 1; }
	int getSize() { return size; }
};

class CoffeeVendingMachine {
	Container tong[3];
	void fill() { for (int i = 0; i < 3; i++) tong[i].fill(); }
	void selectEspresso();
	void selectAmericano();
	void selectSugarCoffee();
	void show();
public:
	CoffeeVendingMachine() { Container(); }
	void run();
};

void CoffeeVendingMachine::selectEspresso() {
	cout << "���������� �弼��" << endl;
	tong[0].consume();
	tong[1].consume();
}

void CoffeeVendingMachine::selectAmericano() {
	cout << "�Ƹ޸�ī�� �弼��" << endl;
	tong[0].consume(); 
	tong[1].consume(); 
	tong[1].consume();
}

void CoffeeVendingMachine::selectSugarCoffee() {
	cout << "����Ŀ�� �弼��" << endl;
	tong[0].consume(); 
	tong[1].consume(); 
	tong[1].consume(); 
	tong[2].consume();
}

void CoffeeVendingMachine::show() {
	cout << "Ŀ�� " << tong[0].getSize() << ", " << "�� " << tong[1].getSize() << ", " << "���� " << tong[2].getSize() << ", " << endl;
}

void CoffeeVendingMachine::run() {
	int menu;
	cout << "***** Ŀ�����Ǳ⸦ �۵��մϴ�. *****" << endl;
	while (true) {
		cout << "�޴��� �����ּ���(1:����������, 2:�Ƹ޸�ī��, 3:����Ŀ��, 4:�ܷ�����, 5:ä���)>> ";
		cin >> menu;
		switch (menu){
		case 1:
			selectEspresso();
			break;
		case 2:
			selectAmericano();
			break;
		case 3:
			selectSugarCoffee();
			break;
		case 4:
			show();
			break;
		case 5:
			fill();
			break;
		default:
			return;
		}
	}
}

int main() {
	CoffeeVendingMachine* machine = new CoffeeVendingMachine();
	machine->run();
}