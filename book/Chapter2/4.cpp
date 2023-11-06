#include <iostream>

int main() {
	float a, b, c, d, e;
	float max = 0;

	std::cout << "5개의 실수를 입력하라>>";
	std::cin >> a >> b >> c >> d >> e;

	if (max < a)
	{
		max = a;
	}
	if (max < b)
	{
		max = b;
	}
	if (max < c)
	{
		max = c;
	}
	if (max < d)
	{
		max = d;
	}
	if (max < e)
	{
		max = e;
	}

	std::cout << "제일 큰 수 = " << max;

	return 0;
}