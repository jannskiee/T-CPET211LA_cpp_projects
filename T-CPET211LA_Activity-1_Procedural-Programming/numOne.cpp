// Create a simple calculator program for a cashier in a grocery. Your program will require to input the price
// of three items, the total of the customer; and also if the customer is a senior citizen or not.
// Use the following below as a reference for your computation.
//    •	All items are subject to 10% tax rate.
//    •	If the customer is a senior citizen, the have an discount of 20%
//    •	At the end of the program, display the change of the customer.
//    Display also if the total of the customer is insufficient.

#include <iostream>
#include <iomanip>

double tax(double total);

double total(double total, double taxRate, int age);

double payment(double totalPrice, double money);

int main() {
    double totalItems = 0;
    int age;
    double taxRate;
    double totalPrice;
    double money;

    std::cout << "Enter your age: " << std::endl;
    std::cin >> age;

    for (int i = 0; i < 3; i++) {
        double itemPrice;
        std::cout << "Enter the price of item " << i + 1 << ": " << std::endl;
        std::cin >> itemPrice;
        totalItems += itemPrice;
    }

    std::cout << "The total price of the three items is: " << std::fixed << std::setprecision(2) << totalItems << std::endl;

    taxRate = tax(totalItems);

    totalPrice = total(totalItems, taxRate, age);

    if (age >= 60) {
        std::cout << "You have a discount of 20%, The total price is: " << std::fixed << std::setprecision(2) << totalPrice << std::endl;
    } else {
        std::cout << "The total price is: " << std::fixed << std::setprecision(2) << totalPrice << std::endl;
    }

    std::cout << "Enter the amount of money you will pay: " << std::endl;
    std::cin >> money;

    payment(totalPrice, money);

    return 0;
}

double tax(double total) {
    double tax;
    tax = total * 0.10;
    return tax;
}

double total(double total, double taxRate, int age) {
    double payment;
    double discount;
    if (age >= 60) {
        discount = (total + taxRate) * 0.20;
        payment = (total + taxRate) - discount;
    } else {
        payment = total + taxRate;
    }
    return payment;
}

double payment(double totalPrice, double money) {
    double change;
    if (money < totalPrice) {
        std::cout << "Insufficient payment" << std::endl;
    } else {
        change = money - totalPrice;
        std::cout << "Your change is: " << std::fixed << std::setprecision(2) << change << std::endl;
    }
    return change;
}
