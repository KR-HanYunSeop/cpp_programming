#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {
	char pwd[100], pwd2[100];

	cout << "새 암호를 입력하세요>>";
	cin >> pwd;

	cout << "새 암호를 다시 한 번 입력하세요>>";
	cin >> pwd2;

	if (strcmp(pwd, pwd2) == 0)
	{
		cout << "같습니다\n";
	}
	else
	{
		cout << "같지 않습니다\n";

	}

	return 0;
}