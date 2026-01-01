#include <iostream>
using namespace std;

int main() {
    int secret = 7;
    int guess;

    cout << "Guess the number: ";
    cin >> guess;

    while (guess != secret) {
        cout << "Wrong guess. Try again: ";
        cin >> guess;
    }

    cout << "Correct! You guessed the number." << endl;
    return 0;
}