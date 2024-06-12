// Input numbers for a vector, and display the largest.

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers;
    int n;

    std::cout << "Enter numbers (enter -1 to stop): " << std::endl;
    while (std::cin >> n && n != -1) {
        numbers.push_back(n);
    }

    if (!numbers.empty()) {
        int max_number = *std::max_element(numbers.begin(), numbers.end());
        std::cout << "The largest number is: " << max_number << std::endl;
    } else {
        std::cout << "No numbers were entered." << std::endl;
    }

    return 0;
}