#include <iostream>
using namespace std;

int main() {
    int number;
    int sum = 0;

    cout << "Enter positive numbers (0 to stop): " << endl;

    cin >> number;

    while (number != 0) {
        if (number > 0) {
            sum += number;
        }
        cin >> number;
    }

    cout << "Sum of entered numbers is: " << sum << endl;

    return 0;
}
