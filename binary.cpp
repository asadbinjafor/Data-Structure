#include <iostream>
using namespace std;


int binarySearch(int arr[], int low, int high, int x) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x) {
            return mid;
        } else if (arr[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int elements[] = {10, 16, 18, 21, 25, 82, 92, 95};
    int n = sizeof(elements) / sizeof(elements[0]);
    int searchItem = 92;

    int result = binarySearch(elements, 0, n - 1, searchItem);

    if (result != -1) {
        cout << "Element " << searchItem << " found at index " << result << endl;
    } else {
        cout << "Element " << searchItem << " not found in the array" <<endl;
    }

    return 0;
}

