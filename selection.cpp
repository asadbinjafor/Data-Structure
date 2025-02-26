#include <iostream>
using namespace std;
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int min_idx = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
}

int main() {
    int elements[] = {92, 82, 21, 16, 18, 95};
    int n = sizeof(elements) / sizeof(elements[0]);

    selectionSort(elements, n);

    cout << "Sorted elements:";
    for (int i = 0; i < n; ++i) {
        cout << " " << elements[i];
    }
    cout << endl;

    return 0;
}

