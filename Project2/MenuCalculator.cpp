#include <iostream>
using namespace std;

int main() {
    int choice;
    double a, b;

    do {
        cout << "\n--- MENU CALCULATOR ---\n";
        cout << "1. Add (+)\n";
        cout << "2. Subtract (-)\n";
        cout << "3. Multiply (*)\n";
        cout << "4. Divide (/)\n";
        cout << "0. Exit\n";
        cout << "Choose: ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            cout << "Enter two numbers: ";
            cin >> a >> b;
        }

        switch (choice) {
        case 1:
            cout << "Result = " << a + b << endl;
            break;
        case 2:
            cout << "Result = " << a - b << endl;
            break;
        case 3:
            cout << "Result = " << a * b << endl;
            break;
        case 4:
            if (b != 0)
                cout << "Result = " << a / b << endl;
            else
                cout << "Error: Division by zero\n";
            break;
        case 0:
            cout << "Bye!\n";
            break;
        default:
            cout << "Invalid choice\n";
        }

    } while (choice != 0);