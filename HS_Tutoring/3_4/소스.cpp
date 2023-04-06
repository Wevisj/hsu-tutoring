#include <iostream>
using namespace std;

class CoffeeMachine {
private:
	int coffee;
	int water;
	int sugar;
public:
	CoffeeMachine(int coffee, int water, int sugar);
	void show();
	void fill() { coffee = 10; water = 10; sugar = 10; }
	void drinkEspresso() { coffee -= 1; water -= 1; }
	void drinkSugarCoffee() { coffee -= 1; water -= 2; sugar -= 1; }
	void drinkAmericano() { coffee -= 1; water -= 2; }
};

CoffeeMachine::CoffeeMachine(int coffee, int water, int sugar) {
	this->coffee = coffee;
	this->water = water;
	this->sugar = sugar;
}

void CoffeeMachine::show() {
	cout << "커피 머신 상태,\t커피:" << coffee << "\t물:" << water << "\t설탕:" << sugar << endl;
}

int main() {
	CoffeeMachine java(5, 10, 3);
	java.drinkEspresso();
	java.show();
	java.drinkAmericano();
	java.show();
	java.drinkSugarCoffee();
	java.show();
	java.fill();
	java.show();
}