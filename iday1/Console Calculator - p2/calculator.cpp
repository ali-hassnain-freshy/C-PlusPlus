#include <iostream>
#include <cmath>

int main() {
    double a;
    double b;
    int choice;
    std::cout << "\nChoose an Operation \n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Power\n6. Min\n7. Max\nEnter Here: ";
    std::cin >> choice;

    std::cout << "Enter Num 1: ";
    std::cin >> a;
    std::cout << "Enter Num 2: ";
    std::cin >> b;

    switch (choice) {
        case 1:
            std::cout << a + b;
            break;
        case 2:
            std::cout << a - b;
            break;
        case 3:
            std::cout << a * b;
            break;
        case 4:
            if (b != 0)
                std::cout << a / b;
            else
                std::cout << "Error: Division by zero!";
            break;
        case 5:
            std::cout << pow(a, b);
            break;
        case 6:
            std::cout << std::fmin(a, b); // Use std::fmin for doubles
            break;
        case 7:
            std::cout << std::fmax(a, b); // Use std::fmax for doubles
            break;
        default:
            std::cout << "Invalid choice!";
    }

    return 0;
}
