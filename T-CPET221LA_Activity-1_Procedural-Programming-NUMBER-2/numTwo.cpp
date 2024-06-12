// Enter the height and width of the figure, as well as the character. Then display its figure. Below are the examples:
//    Width: 5
//    Height: 5
//    Character: A
//    AAAAA
//    AAAAA
//    AAAAA
//    AAAAA
//    AAAAA

#include <iostream>

int main() {
    int width, height;
    char character;

    std::cout << "Enter the width of the figure: " << std::endl;
    std::cin >> width;
    std::cout << "Enter the height of the figure: " << std::endl;
    std::cin >> height;
    std::cout << "Enter the character: " << std::endl;
    std::cin >> character;

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            std::cout << character;
        }
        std::cout << std::endl;
    }

    return 0;
}
