#include <iostream>
using namespace std;

int main() {

    int arr1[5] = {10, 20, 30, 40, 50};
    int arr2[] = {1,2,3,4,5,6,7,8};


    int n = 5;
    int m = 8;

    int total = n + m;


    int NewArr[total];

    for (int i = 0; i < n; i++)
 {
        NewArr[i] = arr1[i];
    }
    for (int i = 0; i < m; i++)
 {
        NewArr[n + i] = arr2[i];
    }


    cout << "Merged array in reverse order: ";
    for (int i = total - 1; i >= 0; i--)
{
        cout << NewArr[i] << " ";
    }
    cout << endl;

    return 0;
}
