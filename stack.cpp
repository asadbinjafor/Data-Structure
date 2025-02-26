#include <iostream>

template <typename T>
class MyStack {
private:
    T *Stack;
    int Top, MaxSize;

public:
    MyStack(int size) {
        MaxSize = size;
        Stack = new T[MaxSize];
        Top = -1;
    }

    ~MyStack() {
        delete[] Stack;
    }

    bool isEmpty() {
        return (Top == -1);
    }

    bool isFull() {
        return (Top == MaxSize - 1);
    }

    bool push(T item) {
        if (isFull()) {
            std::cout << "Stack Overflow!\n";
            return false;
        }
        Stack[++Top] = item;
        return true;
    }

    bool pop() {
        if (isEmpty()) {
            std::cout << "Stack Underflow!\n";
            return false;
        }
        Top--;
        return true;
    }

    bool topElement(T &item) {
        if (isEmpty()) {
            std::cout << "Stack is empty!\n";
            return false;
        }
        item = Stack[Top];
        return true;
    }

    void show() {
        if (isEmpty()) {
            std::cout << "Stack is empty!\n";
            return;
        }
        std::cout << "Stack elements:\n";
        for (int i = Top; i >= 0; i--) {
            std::cout << Stack[i] << "\n";
        }
    }

    void resize(int newSize) {
        T *newStack = new T[newSize];
        int minSize = (MaxSize < newSize) ? MaxSize : newSize;
        for (int i = 0; i < minSize; i++) {
            newStack[i] = Stack[i];
        }
        delete[] Stack;
        Stack = newStack;
        MaxSize = newSize;
        if (Top >= MaxSize) {
            Top = MaxSize - 1;
        }
    }
};

int main() {
    MyStack<int> stack(5);
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);
    stack.push(6); // Stack overflow

    stack.show();

    int topElement;
    if (stack.topElement(topElement)) {
        std::cout << "Top element: " << topElement << "\n";
    }

    stack.pop();
    stack.pop();

    stack.show();

    stack.resize(3);
    stack.show();

    return 0;
}

