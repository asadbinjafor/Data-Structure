#include <iostream>
using namespace std;
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int elements[] = {92, 82, 21, 16, 18, 95};
    int n = sizeof(elements) / sizeof(elements[0]);

    bubbleSort(elements, n);

    cout << "Sorted elements:";
    for (int i = 0; i < n; ++i) {
        std::cout << " " << elements[i];
    }
   cout << endl;

    return 0;
}

