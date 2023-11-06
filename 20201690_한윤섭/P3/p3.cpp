#include <iostream>

using namespace std;

class Complex {
private:
    double real = 0.0;
    double imaginary = 0.0;

public:
    Complex(double real = 0.0, double imaginary = 0.0){
        this->real = real;
        this->imaginary = imaginary;
    }

    void show() {
    if (real != 0) {
        cout << "( " << this->real;
        if (this->imaginary > 0) {
            cout << "+" << this->imaginary << "i";
        }
        else if (this->imaginary < 0) {
            cout << "-" << -this->imaginary << "i";
        }
        cout << " )";
    }
    else {
        if (this->imaginary != 0) {
            cout << "( ";
            if (this->imaginary > 0) {
                cout << this->imaginary << "i";
            }
            else if (this->imaginary < 0) {
                cout << "-" << -this->imaginary << "i";
            }
            cout << " )";
        }
        else {
            cout << "( 0 )";
        }
    }
    cout << '\n';
    }
};

int main() {
    Complex u(1, 2);
    Complex v(3, -4);
    Complex x(5);
    Complex y(0, 6);
    Complex z;

    u.show();
    v.show();
    x.show();
    y.show();
    z.show();

    return 0;
}
