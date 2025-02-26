
#include <iostream>
using namespace std;

#define MAX_SIZE 100

class Stack {

private:

    int top;
    int arr[MAX_SIZE];

public:

    Stack()
{
        top = -1;
    }

    bool push(int x)
 {
        if (top >= (MAX_SIZE - 1))
{
            cout << "Stack Overflow\n";
            return false;
        }

        else {
            arr[++top] = x;
            cout << x << " pushed into stack\n";
            return true;
        }
    }

    int pop()
 {
        if (top < 0)
{
            cout << "Stack Underflow\n";
            return -1;
        }

        else {
            int popped = arr[top--];
            return popped;
        }
    }

    int peek()
{
        if (top < 0) {
            cout << "Stack is Empty\n";
            return -1;
        }

        else {
            return arr[top];
        }
    }

    bool isEmpty() {
        return (top < 0);
    }
};

int main()
 {
    Stack stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    cout << stack.pop() << " popped from stack\n";
    cout << "Top element is: " << stack.peek() << endl;

    cout << "Is the stack empty? " << (stack.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}
