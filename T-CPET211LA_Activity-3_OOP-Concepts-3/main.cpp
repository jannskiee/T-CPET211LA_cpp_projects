// An abstract base class (Person) has two pure virtual functions that accept the name and age of a person,
// and another pure virtual function to display them. Create two derived class (Student and Faculty) for it.

#include <iostream>

class Person {
public:
    virtual void setNameAge() = 0;
    virtual void display() = 0;
};

class Student : public Person {
private:
    char name[50]{};
    int age{};
public:
    void setNameAge() override {
        std::cout << "Enter student's name: ";
        std::cin.getline(this->name, 50);
        std::cout << "Enter student's age: ";
        std::cin >> this->age;
        std::cin.ignore();
    }
    void display() override {
        std::cout << "\nStudent Name: " << name << ", Age: " << age << std::endl;
    }
};

class Faculty : public Person {
private:
    char name[50]{};
    int age{};
public:
    void setNameAge() override {
        std::cout << "\nEnter faculty's name: " << std::endl;
        std::cin.getline(this->name, 50);
        std::cout << "Enter faculty's age: " << std::endl;
        std::cin >> this->age;
        std::cin.ignore();
    }
    void display() override {
        std::cout << "\nFaculty Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {
    Student s;
    s.setNameAge();
    s.display();

    Faculty f;
    f.setNameAge();
    f.display();

    return 0;
}

