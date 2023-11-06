#include <iostream>
#include <string>

using namespace std;

class Date {
public:
	int year;
	int month;
	int day;
	Date(int year, int month, int day);
	Date(string date);
	void show();
	int getYear();
	int getMonth();
	int getDay();
};

Date::Date(int year, int month, int day)
{
	this->year = year;
	this->month = month;
	this->day = day;
}
Date::Date(string date)
{
	int ind;

	this->year = stoi(date);

	ind = date.find('/');
	this->month = stoi(date.substr(ind + 1));

	ind = date.find('/', ind + 1);
	this->day = stoi(date.substr(ind + 1));
}
void Date::show()
{
	cout << year << "년" << month << "월" << day << "일" << endl;
}
int Date::getYear()
{
	return year;
}
int Date::getMonth()
{
	return month;
}
int Date::getDay()
{
	return day;
}

int main() {
	Date birth(2014, 3, 20);
	Date independenceDay("1945/8/15");
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;

	return 0;
}