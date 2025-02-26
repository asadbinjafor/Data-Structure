#include <iostream>
using namespace std;

void OddPrint(int start, int end) {
    for (int i = start; i <= end; i++) {
        if (i % 2 != 0) {
            cout << i << " ";
        }
    }
}

int main() {
    int start, end;
    cout << "Enter the starting value of the range: ";
    cin >> start;
    cout << "Enter the ending value of the range: ";
    cin >> end;

    OddPrint(start, end);

    return 0;
}


