// Input five numbers and put it in a stack in ascending order

#include <iostream>
#include <stack>

int main() {
    std::stack<int> s;

    for (int i = 0; i < 5; i++) {
        int num;
        std::cout << "Enter a number: " << std::endl;
        std::cin >> num;
        s.push(num);
    }

    std::cout << "\nStack Result: " << std::endl;

    while (!s.empty()) {
        std::cout << s.top() << std::endl;
        s.pop();
    }

    return 0;
}