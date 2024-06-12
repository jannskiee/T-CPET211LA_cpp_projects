// The base class has a public integer variable whose values are 10 and 100.
// The derived class has a function to display the sum and product of the two variables.

#include <iostream>

class Base {
public:
    int num1 = 10;
    int num2 = 100;
};

class Derived : public Base {
public:
    void display() {
        std::cout << "Sum: " << num1 + num2 << std::endl;
        std::cout << "Product: " << num1 * num2 << std::endl;
    }
};

int main() {
    Derived d;
    d.display();

    return 0;
}