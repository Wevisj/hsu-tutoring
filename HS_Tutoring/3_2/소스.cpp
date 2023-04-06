#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Date {
private:
	string year_month_day;
	int year;
	int month;
	int day;
public:
	Date(int y, int m, int d) { year = y; month = m; day = d; }
	Date(string ymd) { year_month_day = ymd; }
	int getYear() { return year; }
	int getMonth() { return month; }
	int getDay() { return day; }
	void show();
};

void Date::show() {
	char separator = '/';
	istringstream iss(year_month_day);
	string str_buf;
	getline(iss, str_buf, separator); year = stoi(str_buf);
	getline(iss, str_buf, separator); month = stoi(str_buf);
	getline(iss, str_buf, separator); day = stoi(str_buf);
	cout << year << "³â" << month << "¿ù" << day << "ÀÏ" << endl;
}

int main() {
	Date birth(2014, 3, 20);
	Date independenceDay("1945/8/15");
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
}