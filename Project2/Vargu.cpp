#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Jep numrin e elementeve te vargut: ";
    cin >> n;

    int a[n];

    cout << "Jep elementet e vargut:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Vlerat negative ose baraz me zero jane:" << endl;
    for (int i = 0; i < n; i++) {
        if (a[i] <= 0) {
            cout << a[i] << " ";
        }
    }

    return 0;
}
