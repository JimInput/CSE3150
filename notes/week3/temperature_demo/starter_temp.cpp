#include <iostream>

// TODO: function prototypes
void updateTemperature(int* tempPtr, int newTemp);
void printTemperature(const int& temp);
double averageTemperature(const int temps[], int size);

int main() {
    int temps[5];
    int size = 0;
    int choice;

    do {
        std::cout << "Menu:\n";
        std::cout << "1. Add temperature\n";
        std::cout << "2. Update temperature\n";
        std::cout << "3. Print all temperatures\n";
        std::cout << "4. Compute average\n";
        std::cout << "5. Quit\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                // TODO: add temperature
                if (size < 5) {
                    int temp_to_add;
                    std::cout << "Enter temp: ";
                    std::cin >> temp_to_add;
                    temps[size++] = temp_to_add;
                } else {
                    std::cout << "No more room for temps." << std::endl;
                }
                break;
            }
            case 2: {
                // TODO: update temperature
                int index, newTemp;
                std::cout << "Enter index for temp to update: ";
                std::cin >> index;
                if (index >= 0 && index < size) {
                    std::cout << "Enter new temp: ";
                    std::cin >> newTemp;
                    updateTemperature(&temps[index], newTemp);
                } else {
                    std::cout << "Invalid index, out of bounds." << std::endl;
                }
                break;
            }
            case 3: {
                // TODO: print all temperatures
                for (int i = 0; i < size; ++i) {
                    printTemperature(temps[i]);
                }
                std::cout << std::endl;
                break;
            }
            case 4: {
                // TODO: compute average (use try/catch)
                double average;
                try {
                    average = averageTemperature(temps, size);
                    std::cout << "Average=" << average << std::endl;
                } catch (std::string s) {
                    std::cout << "Something went wrong " << s << std::endl;
                }
                break;
            }
            case 5: {
                std::cout << "Goodbye!" << std::endl;
                break;
            }
            default: {
                std::cout << "Invalid choice" << std::endl;
            }
        }
    } while (choice != 5);

    return 0;
}

// TODO: implement updateTemperature
void updateTemperature(int* tempPtr, int newTemp) {
    if (tempPtr != nullptr) {
        *tempPtr = newTemp;
    }
}
// TODO: implement printTemperature
void printTemperature(const int& temp) {
    std::cout << "Temperature " << temp << std::endl;
}
// TODO: implement averageTemperature
double averageTemperature(const int temps[], int size) {
    if (size == 0)
        throw("Divide by zero");
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += temps[i];
    }
    return static_cast<double>(sum) / size;
}
