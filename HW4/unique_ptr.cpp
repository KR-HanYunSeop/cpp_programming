#include <iostream>
#include <memory>
using namespace std;

class Resource {
public:
    Resource() { std::cout << "Resource acquired\n"; }
    ~Resource() { std::cout << "Resource destroyed\n"; }
    void doSomething() { std::cout << "Doing something\n"; }
};

void process(std::shared_ptr<Resource> ptr) {
    if (ptr != nullptr) {
        ptr->doSomething();
    }
    else {
        std::cout << "Pointer is null. No action taken." << std::endl;
    }
}

int main() {
    cout << "20201690 한윤섭" << endl;
    std::shared_ptr<Resource> resourcePtr = std::make_shared<Resource>();
    process(resourcePtr);
    process(nullptr);

    return 0;
}