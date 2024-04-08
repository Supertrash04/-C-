#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int choice;
    double num1, num2, result;

    do {
        cout << "Choose operation:" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Exponentiation" << endl;
        cout << "6. Square root" << endl;
        cout << "7. Find 1% of a number" << endl;
        cout << "8. Find factorial of a number" << endl;
        cout << "9. Exit" << endl;
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter two numbers to add: ";
            cin >> num1 >> num2;
            result = num1 + num2;
            cout << "Result: " << result << endl;
            break;
        case 2:
            cout << "Enter two numbers to subtract: ";
            cin >> num1 >> num2;
            result = num1 - num2;
            cout << "Result: " << result << endl;
            break;
        case 3:
            cout << "Enter two numbers to multiply: ";
            cin >> num1 >> num2;
            result = num1 * num2;
            cout << "Result: " << result << endl;
            break;
        case 4:
            cout << "Enter two numbers to divide: ";
            cin >> num1 >> num2;
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Result: " << result << endl;
            }
            else {
                cout << "Cannot divide by zero" << endl;
            }
            break;
        case 5:
            cout << "Enter base and exponent: ";
            cin >> num1 >> num2;
            result = pow(num1, num2);
            cout << "Result: " << result << endl;
            break;
        case 6:
            cout << "Enter a number to find square root: ";
            cin >> num1;
            result = sqrt(num1);
            cout << "Result: " << result << endl;
            break;
        case 7:
            cout << "Enter a number to find 1% of: ";
            cin >> num1;
            result = num1 * 0.01;
            cout << "Result: " << result << endl;
            break;
        case 8:
            cout << "Enter a number to find factorial: ";
            cin >> num1;
            result = 1;
            for (int i = 1; i <= num1; ++i) {
                result *= i;
            }
            cout << "Result: " << result << endl;
            break;
        case 9:
            cout << "Exiting calculator..." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }

    } while (choice != 9);

    return 0;
}