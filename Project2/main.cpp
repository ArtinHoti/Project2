#include <iostream>
using namespace std;

int main() {
    int number;
    int sum = 0;
    int again;
    label_1:
    cout << "Enter positive numbers (0 to stop): " << endl;

    cin >> number;

    while (number != 0) {
        if (number > 0) {
            sum += number;
        }
        cin >> number;
    }

    cout << "Sum of entered numbers is: " << sum << endl;
    cout << "If u want to do it again type 1 if not type 0";cin >> again;
    if(again == 1){
        goto label_1;
    }else{
        return 0 ;
    }
    return 0;
}
