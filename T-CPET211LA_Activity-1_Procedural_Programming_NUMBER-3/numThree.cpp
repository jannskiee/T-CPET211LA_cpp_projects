// Input three numbers, use the following functions in your program
//    •	isUnique(int,int,int) – returns a boolean TRUE if three numbers are unique numbers. Otherwise, returns a boolean FALSE
//    •	*if all numbers are unique numbers:
//    •	largest(int,int,int) – returns the largest number between three parameters
//    •	sorting(int,int,int) – arrange and display the three parameters in ascending order.


#include <iostream>

bool isUnique(int a, int b, int c);

double largest(int a, int b, int c);

void sorting(int a, int b, int c);

int main() {
    int a, b, c;
    std::cout << "Enter three numbers: " << std::endl;
    std::cin >> a >> b >> c;

    if (isUnique(a, b, c)) {
        std::cout << "The largest number is: " << largest(a, b, c) << std::endl;
        sorting(a, b, c);
    } else {
        std::cout << "The numbers are not unique!" << std::endl;
    }

    return 0;
}

bool isUnique(int a, int b, int c) {
    if (a != b && a != c && b != c) {
        return true;
    } else {
        return false;
    }
}

double largest(int a, int b, int c) {
    if (a > b && a > c) {
        return a;
    } else if (b > a && b > c) {
        return b;
    } else {
        return c;
    }
}

void sorting(int a, int b, int c) {
    int temp;
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (a > c) {
        temp = a;
        a = c;
        c = temp;
    }
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }
    std::cout << "The numbers in ascending order are: " << a << " " << b << " " << c << std::endl;
}