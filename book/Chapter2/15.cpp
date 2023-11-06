#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {
	char op;
	int a, b, res;

	while (true)
	{
		cout << "? ";
		cin >> a >> op >> b;

		switch (op)
		{
		case '+':
			res = a + b;
			break;
		case '-':
			res = a - b;
			break;
		case '*':
			res = a * b;
			break;
		case '%':
			res = a % b;
			break;
		case '/':
			res = a / b;
			break;
		default:
			break;
		}

		cout << a << " " << op << " " << b << " = " << res << '\n';
	}

	return 0;
}
