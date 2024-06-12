// In a map, the student ID is the key, while the name is the map. Your program will ask to choose the following:
//	    - add student details (display reject if the student ID is existing, and try again)
//	    - view the student list
//	    - close the program

#include <iostream>
#include <map>
#include <string>
#include <limits>

void addStudent(std::map<int, std::string>& students) {
    int id;
    std::string name;

    std::cout << "Enter student ID: " << std::endl;
    std::cin >> id;

    if (students.find(id) != students.end()) {
        std::cout << "Student ID already exists. Try again." << std::endl;
        return;
    }

    std::cout << "Enter student name: " << std::endl;
    std::cin.ignore();
    std::getline(std::cin, name);

    students[id] = name;
    std::cout << "Student details added successfully." << std::endl;
}

void viewStudentList(const std::map<int, std::string>& students) {
    if (students.empty()) {
        std::cout << "Student list is empty." << std::endl;
        return;
    }

    std::cout << "Student List:" << std::endl;
    for (const auto& student : students) {
        std::cout << "ID: " << student.first << ", Name: " << student.second << std::endl;
    }
}

int main() {
    std::map<int, std::string> students;
    int choice;

    do {
        std::cout << "Choose an option:" << std::endl;
        std::cout << "1. Add student details" << std::endl;
        std::cout << "2. View student list" << std::endl;
        std::cout << "3. Close the program" << std::endl;
        std::cout << "Enter your choice: " << std::endl;
        std::cin >> choice;

        if (std::cin.fail() || choice < 1 || choice > 3) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ignore the rest of the line
            std::cout << "Invalid choice. Please try again." << std::endl;
            continue;
        }

        switch(choice) {
            case 1:
                addStudent(students);
                break;
            case 2:
                viewStudentList(students);
                break;
            case 3:
                std::cout << "Closing the program." << std::endl;
                break;
        }
    } while (choice != 3);

    return 0;
}
