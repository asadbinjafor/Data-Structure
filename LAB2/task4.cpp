#include <iostream>
using namespace std;

int main() {

    int A[10] = {0,1,2,3,4,5,6,7,1,9};

    int num, count = 0;
    cout << "Enter an integer: ";
    cin >> num;


    for (int i = 0; i < 10; i++) {
        if (num == A[i]) {
            count = count + 1;
        }
    }


    cout << "The integer " << num << " occurs " << count << " times in A." << endl;

    return 0;
}
