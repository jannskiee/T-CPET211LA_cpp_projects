// Create a queueing system in transaction office. Ask the user to either 1 – add client, 2 – next client or 3 – service ended.
//  •	Add client – client starts to queue, the system will ask for the client name.
//  •	Next client – next client request will be processed. Display the name of the next client.
//  •	Service ended – program terminated.

#include <iostream>
#include <queue>
#include <string>
#include <limits>

int main() {
    std::queue<std::string> clientQueue;
    int choice;
    std::string clientName;

    do {
        std::cout << "Queueing System Menu:" << std::endl;
        std::cout << "1 - Add client" << std::endl;
        std::cout << "2 - Next client" << std::endl;
        std::cout << "3 - Service ended" << std::endl;
        std::cout << "Enter your choice: " << std::endl;
        std::cin >> choice;


        if(std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input. Please enter a number between 1 and 3.\n";
            continue;
        }

        std::cin.ignore();

        switch(choice) {
            case 1:
                std::cout << "Enter client name: \n";
                std::getline(std::cin, clientName);
                clientQueue.push(clientName);
                std::cout << "Client " << clientName << " added to the queue.\n";
                break;
            case 2:
                if (!clientQueue.empty()) {
                    std::cout << "Next client: " << clientQueue.front() << '\n';
                    clientQueue.pop();
                } else {
                    std::cout << "No clients in the queue.\n";
                }
                break;
            case 3:
                std::cout << "Service ended. Program terminated.\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }

    } while(choice != 3);

    return 0;
}

