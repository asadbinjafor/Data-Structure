
#include <iostream>

class MyStack {
    int Stack[100];
    int Top;
    int MaxSize;

public:
    // Constructor
    MyStack(int Size = 100) {
        MaxSize = Size;
        Top = 0;
    }

    // Check if stack is empty
    bool isEmpty() {
        return Top == 0;
    }

    // Check if stack is full
    bool isFull() {
        return Top == MaxSize;
    }

    // Push element onto the stack
    bool push(int Element) {
        if (!isFull()) {
            Stack[Top++] = Element;
            return true;
        }
        return false; // Stack is full
    }

    // Pop element from the stack
    bool pop() {
        if (!isEmpty()) {
            Top--;
            return true;
        }
        return false; // Stack is empty
    }

    // Return top element of the stack
    int topElement() {
        if (!isEmpty()) {
            return Stack[Top - 1];
        }
        // Return some default value if stack is empty
        return -1;
    }

    // Display elements of the stack
    void show() {
        if (isEmpty()) {
            std::cout << "Stack is empty." << std::endl;
        } else {
            std::cout << "Elements of the stack:" << std::endl;
            for (int i = Top - 1; i >= 0; i--) {
                std::cout << Stack[i] << std::endl;
            }
        }
    }
};

int main() {
    MyStack stack(5); // Create a stack of size 5

    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);
    stack.push(50);

    std::cout << "Top element: " << stack.topElement() << std::endl;

    stack.pop();

    stack.show();

    return 0;
}
