#include <iostream>
using namespace std;

int main() {
    int a[10], i, pos, val;

    for (i = 0; i < 9; i++) {
        cout << "Enter Number: ";
        cin >> a[i];
    }

    cout << "Enter Position to Insert: ";
    cin >> pos;

    cout << "Enter Value to Insert: ";
    cin >> val;

    for (i = 8; i >=pos - 1; i--) {
        a[i + 1] = a[i];
    }

    a[pos - 1] = val;

    cout << "Updated Array is: "<<endl;

    for (i = 0; i < 10; i++) {
        cout << a[i] << endl;
    }

    return 0;
}
