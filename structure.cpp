 #include <iostream>
using namespace std;

// Function to increase the value of the data pointed to by 'data'
void increase(void *data, int psize){
    cout<<psize<<" "<<sizeof(char)<<endl;
    // Check if the size matches that of a char
    if (psize == sizeof(char)) {
        // Declare a char pointer
        char *pchar;
        // Assign the memory address pointed to by 'data' to 'pchar'
        pchar = (char*)data;
        cout<<pchar<<endl;
        ++(*pchar);
        cout<<*pchar<<endl;
        // Increment the value pointed to by 'pchar' (increment the char value)
    }
    // Check if the size matches that of an int
    else if (psize == sizeof(int)) {
        // Declare an int pointer
        int *pint;
        // Assign the memory address pointed to by 'data' to 'pint'
        pint = (int*)data;
        // Increment the value pointed to by 'pint' (increment the int value)
        ++(*pint);
    }
}

// Main function to test the increase function
int main() {
    // Declare a char variable 'a' with initial value 'x'
    char a = 'x';
    // Declare an int variable 'b' with initial value 1602
    int b = 1602;
    cout<<sizeof(b)<<endl;

    // Call the increase function for 'a' passing its memory address and size
    increase(&a, sizeof(a));
    // Call the increase function for 'b' passing its memory address and size
    increase(&b, sizeof(b));

    // Print the updated values of 'a' and 'b'
    cout << a << ", " << b << endl;

    return 0;
}
