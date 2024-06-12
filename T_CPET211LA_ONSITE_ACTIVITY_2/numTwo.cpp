// Two arrays, SETA[5] and SETB[5], should be initialized with values. For each corresponding index, compare
// the elements of the two arrays and output which array has the larger element at that position

#include <iostream>

int main() {
    int setA[5];
    int setB[5];

    std::cout << "Enter the numbers for setA: " << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cin >> setA[i];
    }

    std::cout << "\nEnter the numbers for setB: " << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cin >> setB[i];
    }

    for (int i = 0; i < 5; i++) {
        if (setA[i] > setB[i]) {
            std::cout << "The index number " << i << ", the setA " << setA[i] << " is Largest" << std::endl;
        } else if (setA[i] < setB[i]) {
            std::cout << "The index number " << i << ", the setB " << setB[i] << " is Largest" << std::endl;
        } else {
            std::cout << "Both are equal!" << std::endl;
        }
    }

    return 0;
}
