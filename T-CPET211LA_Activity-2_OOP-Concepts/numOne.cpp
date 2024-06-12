// Create class that contains the following functions
//    •	accept a number as parameter and return if it is negative or positive
//    •	accept a number as parameter and return it’s absolute value
//    •	accept a number as parameter and return if it’s odd or even
//    •	accept a number as parameter and return the square value
//    •	accept a number as parameter and return the cube value
//    •	accept a number as parameter and return if it is divisible by 5

#include <iostream>

class Number {
public:
    static bool isNegative(int number) {
        return number < 0;
    }

    static int absoluteValue(int number) {
        return number < 0 ? -number : number;
    }

    static bool isOdd(int number) {
        return number % 2 != 0;
    }

    static int square(int number) {
        return number * number;
    }

    static int cube(int number) {
        return number * number * number;
    }

    static bool isDivisibleBy5(int number) {
        return number % 5 == 0;
    }

};

int main() {
    Number number;
    int input;

    std::cout << "Enter a number: " << std::endl;
    std::cin >> input;

    std::cout << std::boolalpha;

    std::cout << "\nIs negative: " << Number::isNegative(input) << std::endl;
    std::cout << "Absolute value: " << Number::absoluteValue(input) << std::endl;
    std::cout << "Is odd: " << Number::isOdd(input) << std::endl;
    std::cout << "Square: " << Number::square(input) << std::endl;
    std::cout << "Cube: " << Number::cube(input) << std::endl;
    std::cout << "Is divisible by 5: " << Number::isDivisibleBy5(input) << std::endl;

    return 0;
}
