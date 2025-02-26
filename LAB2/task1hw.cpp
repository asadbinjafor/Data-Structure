
#include <iostream>
using namespace std;

int main() {
    int a[10], i, j, t;
    for (i = 0; i < 10; i++) {
        cout << "Enter Number:"<<endl;
        cin >> a[i];
    }
    cout << "Original Array is:"<<endl;
    for (i = 0; i < 10; i++)
        cout << "\n" << a[i];
    i = 0;
    j = 9;
    while (i < j) {
        t = a[i];
        a[i] = a[j];
        a[j] = t;
        i++;
        j--;
    }
    cout << "Array after reversing:"<<endl;
    for (i = 0; i < 10; i++)
        cout << "\n" << a[i];
    return 0;
}
