#include <iostream>
using namespace std;
class Stack {
private:
    int top;
    int *arr;
    int capacity;
public:
    Stack() {
        capacity = 1;
        arr = new int[capacity];
        top = -1;
    }
    ~Stack()
 {
        delete[] arr;
    }
    void push(int x)
 {
        if (top == capacity - 1)
 {
            capacity *= 2;
            int *newArr = new int[capacity];
            for (int i = 0; i <= top; i++) {
                newArr[i] = arr[i];
            }

            delete[] arr;
            arr = newArr;
        }
        arr[++top] = x;
        cout << x << " pushed into stack\n";
    }
    int pop(){
        if (top < 0)
 {
            cout << "Stack Underflow\n";
            return -1;
        }
        return arr[top--];
    }
    int peek(){
        if (top < 0)
 {
            cout << "Stack is Empty\n";
            return -1;
        }
        return arr[top];
    }
    bool isEmpty(){
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

    stack.push(40);
    stack.push(50);
    stack.push(60);

    cout << stack.pop() << " popped from stack\n";
    cout << "Top element is: " << stack.peek() << endl;

    return 0;
}

