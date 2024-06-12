// Input two strings and display the following:
//    a.	The longest string between the two
//    b.	The string with the most number of spaces

#include <iostream>

int main() {
    std::string input;
    std::string input2;
    int inputSpaces = 0;
    int input2Spaces = 0;

    std::cout << "Enter a the first string: " << std::endl;
    getline(std::cin, input);

    std::cout << "Enter a the second string: " << std::endl;
    getline(std::cin, input2);

    std::cout << "" << std::endl;

    if (input.length() == input2.length()) {
        std::cout << "BOTH strings have same length!";
    } else if (input.length() > input2.length()) {
        std::cout << "The string (" << input << ") is longer!";
    } else {
        std::cout << "The string (" << input2 << ") is longer!";
    }

    std::cout << "" << std::endl;

    for (int i = 0; i < input.length(); i++) {
        if (input[i] == ' ') {
            inputSpaces++;
        }
    }

    for (int i = 0; i < input2.length(); i++) {
        if (input2[i] == ' ') {
            input2Spaces++;
        }
    }

    if (inputSpaces == input2Spaces) {
        std::cout << "BOTH strings have same spaces!";
    } else if (inputSpaces > input2Spaces) {
        std::cout << "The string (" << input << ") has more spaces!";
    } else {
        std::cout << "The string (" << input2 << ") has more spaces!";
    }

    return 0;
}
