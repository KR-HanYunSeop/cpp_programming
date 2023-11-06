#include <iostream>

int main() {
	int a, b;

	std::cout << "두 수를 입력하라>>";
	std::cin >> a >> b;

	std::cout << "큰 수 = ";
	if (a > b)
	{
		std::cout << a;
	}
	else
	{
		std::cout << b;
	}
	return 0;
}