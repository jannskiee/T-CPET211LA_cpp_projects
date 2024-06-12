// Initialize a deque with 10 numbers. Ask the user to input 1 if the element will be removed in the front,
// 2 if the element will be removed at the back, or 3 to display the updated deque and end the program.

#include <iostream>
#include <deque>

int main() {
    std::deque<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int choice;

    while (true) {
        std::cout << "Enter 1 (remove front), 2 (remove back), 3 (display & exit): " << std::endl;
        std::cin >> choice;

        switch (choice) {
            case 1:
                if (!numbers.empty()) {
                    numbers.pop_front();
                }
                break;
            case 2:
                if (!numbers.empty()) {
                    numbers.pop_back();
                }
                break;
            case 3:
                for (int number : numbers) {
                    std::cout << number << " ";
                }
                std::cout << std::endl;
                return 0;
            default:
                std::cout << "Invalid choice. Please enter 1, 2, or 3." << std::endl;
        }
    }
}
