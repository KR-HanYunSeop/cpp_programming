#include <iostream>
using namespace std;

class ArrayUtility2 {
public:
    static int* concat(int s1[], int s2[], int size);
    static int* remove(int s1[], int s2[], int size, int& retSize);
};

int* ArrayUtility2::concat(int s1[], int s2[], int size) {
    int* arr = new int[size * 2];
    for (int i = 0; i < size; i++)
        arr[i] = s1[i];
    for (int i = size; i < size * 2; i++)
        arr[i] = s2[i-size];
    return arr;

}

int* ArrayUtility2::remove(int s1[], int s2[], int size, int& retSize) {

}

int main() {
    int x[5];
    int y[5];
    int size,retSize = 0;
    int *p;
    cout << "정수 5 개 입력하라. 배열 x에 삽입한다>>";
    for(int i=0; i<5; i++){ 
         cin >> x[i];
    }
    cout << "정수 5 개 입력하라. 배열 y에 삽입한다>>";
    for(int i=0; i<5; i++){ 
         cin >> y[i];
    }
    cout << "합친 정수 배열을 출력한다" << endl;
    int* result = ArrayUtility2::concat(x, y, 5);
    for (int i = 0; i < 10; i++) {
        cout << result[i] << ' ';
    }
    cout << endl;
    delete[] result;
}