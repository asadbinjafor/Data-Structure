#include <iostream>
using namespace std;

int main() {
    int matrix1[3][3], matrix2[3][3], matrix3[3][3], sum[3][3];


    cout << "Enter the elements of first matrix: " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix1[i][j];
        }
    }


    cout << "Enter the elements of second matrix: " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix2[i][j];
        }
    }


    cout << "Enter the elements of third matrix: " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix3[i][j];
        }
    }


    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j] + matrix3[i][j];
        }
    }


    cout << "The sum of the three matrices is: " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
