#ifndef CLASS.H
#define CLASS.H

class Exp {
private:
    int base, exp;

public:
    Exp();
    Exp(int a);
    Exp(int a, int b);
    int getValue();
    int getBase();
    int getExp();
    bool equals(Exp b);
};

#endif
