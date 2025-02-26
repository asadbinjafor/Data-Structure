#include <iostream>
using namespace std;

int main() {

    int A[] = {1, 2, 3, 4, 5}, count = 0;
    int B[] = {4, 5, 6, 7, 8};


    int sizeA =5 ;
    int sizeB =5;


    for (int i = 0; i < sizeA; ++i) {

        for (int j = 0; j < sizeB; ++j) {

            if (A[i] == B[j]) {
                    count++;
            }
        }
    }


    cout << "No common element!" <<count<< endl;

    return 0;
}
