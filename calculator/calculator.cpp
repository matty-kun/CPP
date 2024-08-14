#include <iostream>
using namespace std;

int main() {
    char operation;
    double num1, num2, result;
    
    cout << "A Simple Calculator!\n";

    while (true) {
        cout <<  "Type an Operation (+, -, *, /, % or 'q' to quit): ";
        cin >> operation;

        if (operation == 'q' || operation == 'Q') {
            cout << "Quiting the program...\n";
            break;
        }

        cout << "Enter your first number: ";
        cin >> num1;

        cout << "Enter your second number: ";
        cin >> num2;

        switch(operation) {
            case '+': 
                result = num1 + num2;
                cout << "The sum of " << num1 << " + " << num2 << " is " << result << endl;
                break; 
            case '-':
                result = num1 - num2;
                cout << "The difference of " << num1 << " - " << num2 << " is " << result << endl;
                break;
            case '*':
                result = num1 * num2;
                cout << "The product of " << num1 << " * " << num2 << " is " << result << endl;
                break;
            case '/':
                while (num2 == 0) {
                    cout << "Division by zero is not allowed. Please type a non-zero number: ";
                    cin >> num2;
                }
                result = num1 / num2;
                cout << "The quotient of " << num1 << " / " << num2 << " is " << result << endl;
                break;
            case '%':
                if (static_cast<int>(num1) == num1 && static_cast<int>(num2) == num2){
                    while (num2 == 0) {
                        cout << "Division by zero is not allowed. Please type a non-zero number: ";
                        cin >> num2;
                    }
                    result = static_cast<int>(num1) % static_cast<int>(num2);
                    cout << "Result: " << static_cast<int>(num1) << " % " << static_cast<int>(num2) << " is " << result << endl;
                } else {
                    cout << "Modulo operation requires an integer operands.\n";
                }
                break;
            case 'q':
                cout << "Thank you! :)\n";
                break;
            default:
                break;
        }
    }
    return 0;
}