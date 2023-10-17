#ifndef CLASS_H
#define CLASS_H

#include <string>

class Integer {
private:
    int a;

public:
    Integer(int b);
    Integer(std::string c);

    int get() const;
    void set(int b);
    bool isEven() const;
};

#endif
