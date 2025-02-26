#include <iostream>
using namespace std;

int main() {

    int arr[] = {7, 2, 3, 4, 5, 7, 6, 7, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);


    bool unique = true;
    for (int i = 0; i < n - 1; i++)
 {
        if (arr[i] == arr[i + 1])
 {
            unique = false;
            break;
        }
    }

    if (unique)
{
        cout << "Array already unique...." << endl;
        return 0;
    }


    int unq[n];
    int count = 0;


    for (int i = 0; i < n; i++)
{
        bool already_exists = false;
        for (int j = 0; j < count; j++)
 {
            if (arr[i] == unq[j])
 {
                already_exists = true;
                break;
            }
        }
        if (!already_exists)
{
            unq[count++] = arr[i];
        }
    }

    cout << "Unique elements: ";
    for (int i = 0; i < count; i++)
{
        cout << unq[i] << " ";
    }
    cout << endl;

    return 0;
}
