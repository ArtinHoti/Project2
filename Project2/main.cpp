#include <iostream>
using namespace std;

int main() {
    int number;
    int sum = 0;
    int again;
    label_1:
    cout << "Enter positive numbers (0 to stop): " << endl;

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

    cout << "Sum of entered numbers is: " << sum << endl;
    cout << "If u want to do it again type 1 if not type 0";cin >> again;
    if(again == 1){
        goto label_1;
    }else{
        return 0 ;
    }
    } while (choice != 0);

    return 0;
}
