// Initialize the whole array below. Transverse the whole array to display the index of even number.
// 10 15 31 15 15 5 2 10 10 27

#include <iostream>

int main() {
    int num[10] = {10, 15, 31, 15, 15, 5, 2, 10, 10, 27};

    std::cout << "The index of even numbers are: ";

    for (int i = 0; i < 10; i++){
        if (num[i] % 2 == 0){
            std::cout << i << " ";
        }
    }

    return 0;
}
