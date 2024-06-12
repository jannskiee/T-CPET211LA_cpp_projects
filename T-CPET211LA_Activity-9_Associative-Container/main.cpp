// An array Voltage[10] contains voltage inputs.
// Display the voltage inputs in descending order, removing all duplicate values.

#include <iostream>
#include <set>

int main() {
    int Voltage[10];
    std::cout << "Enter 10 voltage values:\n";
    for (int &i: Voltage) {
        std::cin >> i;
    }

    std::set<int, std::greater<>> uniqueVoltages(Voltage, Voltage + 10);

    std::cout << "\nUnique voltages (Descending Order): " << std::endl;
    for (const auto &voltage: uniqueVoltages) {
        std::cout << voltage << " ";
    }

    return 0;
}