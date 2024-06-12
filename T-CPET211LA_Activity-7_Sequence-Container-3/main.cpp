// Initialize a list with 10 grades.
// Input the passing rate and remove in the list those elements that below the passing rate. (Use predicate)

#include <iostream>
#include <list>
#include <algorithm>

int main() {
    std::list<int> grades = {85, 90, 78, 92, 88, 76, 95, 89, 77, 93};

    std::cout << "Grades: ";
    for (int grade : grades) {
        std::cout << grade << " ";
    }

    std::cout << std::endl;

    int passingRate;
    std::cout << "Enter the passing rate: " << std::endl;
    std::cin >> passingRate;

    grades.erase(std::remove_if(grades.begin(), grades.end(), [passingRate](int grade) {
        return grade < passingRate;
    }), grades.end());

    std::cout << "Grades above the passing rate: ";
    for (int grade : grades) {
        std::cout << grade << " ";
    }

    return 0;
}
