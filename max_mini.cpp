#include <iostream>
using namespace std;

int main() {
    int a[10], i, max, min;

    for (i = 0; i < 10; i++) {
        cout << "Enter Number: ";
        cin >> a[i];
    }

    max = min = a[0];

    for (i = 1; i < 10; i++) {
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
    }

    cout << "Max=" << max << " Min=" << min << endl;

    return 0;
}
