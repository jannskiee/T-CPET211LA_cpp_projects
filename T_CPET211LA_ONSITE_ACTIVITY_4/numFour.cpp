// Input integer values for num [3][5] and display the highest element for each row

#include <iostream>

int main() {
    int num[3][3];

    std::cout << "Enter the integer values for num[3][3]: " << std::endl;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            std::cin >> num[i][j];
        }
    }

    std::cout << "Highest elements for each row: " << std::endl;
    for (int i = 0; i < 3; i++){
        int highest = num[i][0];
        for (int j = 1; j < 3; j++){
            if (num[i][j] > highest){
                highest = num[i][j];
            }
        }
        std::cout << "Row " << i+1 << ": " << highest << std::endl;
    }

    return 0;
}
