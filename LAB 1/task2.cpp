#include <iostream>
using namespace std;

int main() {

    int arr[10];


    for (int i = 0; i < 10; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }


    int oddCount = 0, evenCount = 0;


    for (int i = 0; i < 10; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }


    cout << "Number of odd numbers: " << oddCount << endl;
    cout << "Number of even numbers: " << evenCount << endl;

    return 0;
}
