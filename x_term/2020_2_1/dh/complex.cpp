#include <iostream>

using namespace std;

class Complex {
private:
    double real = 0.0;
    double imaginary =0.0;

public:
    Complex(double real = 0.0, double imaginary = 0.0){
        this->real = real;
        this->imaginary = imaginary;
    }

    //Complex(double real = 0.0) {
    //    this->real = real;
    //    show();
    //}

    //Complex() {
    //    show();
    //}

    void show() {
    if (real != 0) {
        cout << "( " << this->real;
        if (this->imaginary > 0) {
            cout << " + " << this->imaginary << "i";
        }
        else if (this->imaginary < 0) {
            cout << " - " << -this->imaginary << "i";
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
                cout << "- " << -this->imaginary << "i";
            }
            cout << " )";
        }
        else {
            cout << "( 0 )";
        }
    }
    cout << '\n';
}

    

    //void show() const {
    //    if (real != 0) {
    //        cout << "(" << real;
    //        if (imaginary > 0)
    //            cout << " + " << imaginary << "i)";
    //        else if (imaginary < 0)
    //            cout << " - " << -imaginary << "i)";
    //        else
    //            cout << ")";
    //    }
    //    else {
    //        if (imaginary != 0) {
    //            cout << "(" << imaginary << "i)";
    //        }
    //        else {
    //            cout << "(0)";
    //        }
    //    }
    //    cout << endl;
    //}
};

int main() {
    Complex u(12, 34);
    Complex v(56, -78);
    Complex x(90);
    Complex y(0, 78);
    Complex z;

    u.show();
    v.show();
    x.show();
    y.show();
    z.show();

    return 0;
}
