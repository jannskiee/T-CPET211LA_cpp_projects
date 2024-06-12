// Input elements for array OLD[5]. Copy the elements of the OLD[5] array to NEW[5] in reverse order

#include <iostream>

int main() {
    int OLD[5];
    int NEW[5];

    std::cout << "Enter 5 elements for the array: " << std::endl;
    for (int i = 0; i < 5; i++){
        std::cin >> OLD[i];
    }

    for (int i = 0; i < 5; i++){
        NEW[i] = OLD[4 - i];
    }

    std::cout << "Reversed Array: ";
    for (int i = 0; i < 5; i++){
        std::cout << NEW[i] << " ";
    }

}
