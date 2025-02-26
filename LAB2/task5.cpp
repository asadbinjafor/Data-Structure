#include <iostream>
using namespace std;

int main() {

    int arr[10] = {8, 7, 3, 4, 5, 5, 6, 7, 7, 8};


    int count[10] = {0};


    for (int i = 0; i < 10; i++)
{
        count[arr[i] - 1]++;
    }


    cout << "Number of occurrences of each element in array: ";
    for (int i = 0; i < 10; i++)
{
        cout << " " << i + 1 << " occurs " << count[i] << " times\n";
    }
    cout << endl;

    return 0;
}

