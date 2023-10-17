#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
using namespace std;

int main() {
    cout << "20201690 한윤섭" << endl;
    string str;
    int n;
    cout << "아래 한 줄을 입력하세요.(exit를 입력하면 종료합니다)" ;
    while(true){
        srand((unsigned)time(0));
        cout << "\n>>";
        getline(cin,str);
        if(str == "exit") break;
        int length = str.length();
        while(true){
            n = rand()%length;
            if(str[n]!=' ') 
                break;
        }
        int x = rand()%25+95;
        str[n] = (char)x;
        cout << str;
    }
}


