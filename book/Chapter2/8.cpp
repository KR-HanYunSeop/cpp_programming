#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {
	char str[100], max[100];
	int max_cnt = 0;

	for (int i = 0; i < 5; i++)
	{
		cin.getline(str, 100, ';');
		cout << i + 1 << " : " << str << "\n";

		if (strlen(str) > max_cnt)
		{
			strcpy(max, str);
			max_cnt = strlen(str);
		}
	}

	cout << "가장 긴 이름은 " << max << '\n';

	return 0;
}