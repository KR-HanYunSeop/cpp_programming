#include <iostream>
using namespace std;

int main() {
    int num;
    double sum = 0.0;

    cout << "입력할 정수의 개수는? ";
    cin >> num;

    double* numbers = new double[num];

    for (int i = 0; i < num; i++) {
        cout << i + 1 << "번째 정수: ";
        cin >> numbers[i];
        sum += numbers[i];
    }

    delete[] numbers;

    double average = sum / num;

    cout << "합 = " << sum << endl;
    cout << "평균 = " << average << endl;

    return 0;
}
