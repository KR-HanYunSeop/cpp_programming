#include <iostream>
using namespace std;

class complex {
private:
    double real;
    double imag;

public:
    complex(double real = 0.0, double imag = 0.0) : real(real), imag(imag) {}
    void Show() const {
        if (imag >= 0) {
            if (real == 0) {
                cout << "( " << imag << "i" << " )" << endl;
            }
            else {
                cout << "( " << real << " + " << imag << "i" << " )" << endl;
            }
        }
        else {
            cout << "( " << real << " - " << -imag << "i" << " )" << endl;
        }
    }

    double Real() const { return real; }
    double Imag() const { return imag; }

    void Real(double real) { this->real = real; }
    void Imag(double imag) { this->imag = imag; }
};

int main() {
    complex u{12, 34};
    complex v{56, -78};
    complex x{90};
    complex y{0, 78};
    complex z;

    u.Show();
    v.Show();
    x.Show();
    y.Show();
    z.Show();

}
