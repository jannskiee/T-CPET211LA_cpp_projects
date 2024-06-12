// Structure: Create a program that will input and display values in a structure.
// -    Create a structure of any chosen subject. For example: (Student, Food, Dota Hero, Car, etc.)
// -    Your structure should have at least four data.

#include <iostream>

int main() {

    struct Student {
        std::string name;
        int age;
        std::string course;
        float gpa;
    };

    Student student;

    std::cout << "Enter student's name: " << std::endl;
    std::cin >> student.name;
    std::cout << "Enter student's age: " << std::endl;
    std::cin >> student.age;
    std::cout << "Enter student's course: " << std::endl;
    std::cin >> student.course;
    std::cout << "Enter student's GPA: " << std::endl;
    std::cin >> student.gpa;

    std::cout << "Student's name: " << student.name << std::endl;
    std::cout << "Student's age: " << student.age << std::endl;
    std::cout << "Student's course: " << student.course << std::endl;
    std::cout << "Student's GPA: " << student.gpa << std::endl;

    return 0;
}
