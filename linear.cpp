#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int x) {
    for (int i = 0; i < n; ++i) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}

int main() {
    int elements[] = {92, 82, 21, 16, 18, 95, 25, 10};
    int n = sizeof(elements) / sizeof(elements[0]);
    int searchItem = 18;

    int result = linearSearch(elements, n, searchItem);

    if (result != -1) {
        cout << "Element " << searchItem << " found at index " << result << endl;
    } else {
        cout << "Element " << searchItem << " not found in the array" << endl;
    }

    return 0;
}

