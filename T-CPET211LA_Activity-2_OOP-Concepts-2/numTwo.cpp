// Create a class representing a bank account with private balance and account number.
// Provide public methods to deposit, withdraw, and get the account balance.
// Make sure that the account number entered is correct for every transaction.

#include <iostream>

class BankAccount {
private:
    int accountNumber;
    double balance;

public:
    BankAccount(int accountNumber, double balance) {
        this->accountNumber = accountNumber;
        this->balance = balance;
    }

    void deposit(int number, double amount) {
        if (this->accountNumber == number) {
            this->balance += amount;
        }
        std::cout << "Transaction is successful!" << std::endl;
        std::cout << "Your new balance is: " << this->balance << std::endl;
    }

    void withdraw(int number, double amount) {
        if (this->accountNumber == number) {
            if (this->balance >= amount) {
                this->balance -= amount;
                std::cout << "Transaction is successful!" << std::endl;
                std::cout << "Your new balance is: " << this->balance << std::endl;
            } else {
                std::cout << "Insufficient funds" << std::endl;
            }
        }
    }

    void getBalance(int number) const {
        if (this->accountNumber == number) {
            std::cout << "Your balance is: " << this->balance << std::endl;
        }

    }


};


int main() {
    int accountNum;
    int depositAmount;
    int withdrawAmount;
    int choice;

    std::cout << "(HIDDEN) Your back account number is: 1234567" << std::endl;

    std::cout << "Welcome to the bank!" << std::endl;
    std::cout << "Enter your bank account number: " << std::endl;
    std::cin >> accountNum;
    BankAccount transact(accountNum, 0);

    std::cout << "Welcome to your account!" << std::endl;
    std::cout << "What would you like to do? (1) Deposit, (2) Withdraw, (3) Check Balance (Input the number):" << std::endl;
    std::cin >> choice;
    switch (choice){
        case 1:
            std::cout << "Enter the amount you would like to deposit: " << std::endl;
            std::cin >> depositAmount;
            transact.deposit(accountNum, depositAmount);
            break;
        case 2:
            std::cout << "Enter the amount you would like to withdraw: " << std::endl;
            std::cin >> withdrawAmount;
            transact.withdraw(accountNum, withdrawAmount);
            break;
        case 3:
            std::cout << "Your balance is: " << std::endl;
            transact.getBalance(accountNum);
            break;
        default:
            std::cout << "Invalid input" << std::endl;
            break;
    }

    return 0;
}
