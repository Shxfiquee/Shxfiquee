#include <iostream>  // For input and output
using namespace std; // To avoid writing std:: before cin and cout

int main() {
    double num1, num2, result; // Variables to store numbers
    char operation;   // Variable to store the operator (+, -, *, /)

    // Ask for the first number
    cout << "Enter first number: ";
    cin >> num1;

    // Ask for the operator
    cout << "Enter an operator (+, -, *, /):"; 
    cin >> operation;

    // Ask for the second number
    cout << "Enter second number: ";
    cin >> num2;


    // Checking what the user entered
    if (operation == '+') {
        cout << "You chose additon!" << endl;
        result = num1 + num2;
    } else if (operation == '-') {
        cout << "You chose subtraction!" << endl;
        result = num1 - num2;
    } else if (operation == '*') {
        cout << "You chose multiplication!" << endl;
        result = num1 * num2;
    } else if (operation == '/') {
        if (num2 == 0) {  // Correct check for division by zero
            cout << "Undefined. Cannot divide by 0" << endl;
            return 1;}
        cout << "You chose division!" << endl;
        result = num1 / num2;
    } else {
        cout << "Invalid operator!" << endl;
    }


    // Display the result
    if (result != 0) {
    cout << "Result: " << result << endl;
    } 





    return 0; // Program ends successfully
}