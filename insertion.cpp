#include <iostream>
using namespace std;
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int elements[] = {92, 82, 21, 16, 18, 95};
    int n = sizeof(elements) / sizeof(elements[0]);

    insertionSort(elements, n);

    cout << "Sorted elements:";
    for (int i = 0; i < n; ++i) {
    cout << " " << elements[i];
    }
    cout <<endl;

    return 0;
}

