// Lotto Game (A): There are two sets of arrays.
// First set is the myBET[6] that contains your six input bets (should only accept 1 to 45),
// and theCOMBO[6] that contains the winning combination which is 10, 44, 12, 6, 29, 31.
// Input your six number bet combinations and display "YOU WON" if you won the lotto combination

#include <iostream>

int main() {
    int count = 0;
    int myBET[6];
    int COMBO[6] = {10, 44, 12, 6, 29, 31};

    std::cout << "Enter your 6 number bet combinations: " << std::endl;
    for (int i = 0; i < 6; i++) {
        std::cin >> myBET[i];
    }

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if (myBET[i] == COMBO[j]) {
                count++;
            }
        }
    }

    if (count == 6) {
        std::cout << "YOU WON" << std::endl;
    } else {
        std::cout << "YOU LOSE" << std::endl;
    }

    return 0;
}
