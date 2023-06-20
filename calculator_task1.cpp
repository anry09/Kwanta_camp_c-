#include <iostream>

int main() {
    char op;
    double num1, num2, result;

    // Read the operator and two numbers from the user
    std::cout << "Enter operator (+, -, *): ";
    std::cin >> op;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    // Perform the calculation based on the operator
    switch (op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        
        default:
            std::cout << "Error: Invalid operator." << std::endl;
            return 1;  // Exit the program with an error status
    }

    // Print the result
    std::cout << "Result: " << result << std::endl;

    return 0;
}