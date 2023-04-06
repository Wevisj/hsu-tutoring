#include <iostream>
#include <string>
using namespace std;

class Account {
private:
	int balance;
	string owner;
public:
	Account(string o, int id, int b) { owner = o, balance = b; }
	string getOwner() { return owner; }
	void deposit(int money) { balance += money; }
	int inquiry() { return balance; }
	int withdraw(int money) { balance -= money; return money; }
};

int main() {
	Account a("kitae", 1, 5000);
	a.deposit(50000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
	int money = a.withdraw(20000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
}