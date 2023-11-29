#include <iostream>
#include <memory>

class Resource {
public:
   Resource() { std::cout << "Resource acquired\n"; }
   ~Resource() { std::cout << "Resource destroyed\n"; }
   void doSomething() { std::cout << "Doing something\n"; }
};

struct Free {
   void operator()(Resource* ptr) {
      std::cout << "Custom delete\n";
      free(ptr);
   }
};
int main() {
   std::cout << "20201690 한윤섭" << std::endl;

   std::unique_ptr<Resource, Free> p(new Resource);

   return 0;
}