// The gender (M or F) is the key of 6 input names. Ask the user to choose what gender to display (Male or Female).

#include <iostream>
#include <map>
#include <vector>
#include <string>

int main() {
    std::map<std::string, std::vector<std::string>> names;

    std::cout << "Enter 6 names with their corresponding genders (M/F): " << std::endl;
    for (int i = 0; i < 6; ++i) {
        std::string name, gender;
        std::cout << "Name " << i+1 << ": " << std::endl;
        std::cin >> name;

        std::string input_gender;
        while (true) {
            std::cout << "Gender (male/female): " << std::endl;
            std::cin >> input_gender;

            if (input_gender == "male" || input_gender == "female") {
                gender = (input_gender == "male") ? "M" : "F";
                break;
            } else {
                std::cout << "Invalid gender. Please enter 'male' or 'female'." << std::endl;
            }
        }

        names[gender].push_back(name);
    }

    std::cout << "\nMale names:" << std::endl;
    for (const auto &name : names["M"]) {
        std::cout << name << std::endl;
    }

    std::cout << "Female names:" << std::endl;
    for (const auto &name : names["F"]) {
        std::cout << name << std::endl;
    }

    return 0;
}
