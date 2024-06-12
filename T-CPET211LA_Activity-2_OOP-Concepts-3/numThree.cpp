// A Quadrilateral class has a function that will display if it is a Square or Rectangle,
// as well as return its perimeter and area. Use the constructor of the class to initialize its length and width.

#include <iostream>

class Quadrilateral {


public:
    double length, width;

    Quadrilateral(int length, int width) {
        this->length = length;
        this->width = width;
    }

    static void display(int length, int width) {
        if (length == width) {
            std::cout << "\nIt is a square" << std::endl;
        } else {
            std::cout << "\nIt is a rectangle" << std::endl;
        }
    }

    int perimeter() const {
        return 2 * (length + width);
    }

    int area() const {
        return length * width;
    }
};


int main() {
    int length, width;

    std::cout << "Enter the length: " << std::endl;
    std::cin >> length;

    std::cout << "Enter the width: " << std::endl;
    std::cin >> width;

    Quadrilateral quadrilateral(length, width);

    Quadrilateral::display(length, width);

    std::cout << "Perimeter: " << quadrilateral.perimeter() << std::endl;
    std::cout << "Area: " << quadrilateral.area() << std::endl;


    return 0;
}
