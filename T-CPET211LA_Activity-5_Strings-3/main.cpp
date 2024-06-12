// Create a program that will arrange a string alphabetically

#include <iostream>
#include <algorithm>

int main() {
    std::string str;
    std::cout << "Enter a string: " << std::endl;
    std::cin >> str;
    std::sort(str.begin(), str.end());
    std::cout << "The string arranged alphabetically is: " << str << std::endl;

    return 0;
}
