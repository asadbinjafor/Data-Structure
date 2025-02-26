#include <iostream>
using namespace std;
#define MAX_SIZE 100
class Queue {
private:
    int front, rear, size;
    int arr[MAX_SIZE];
public:
    Queue() {
        front = rear = -1;
        size = 0;
    }
    bool isEmpty(){
        return (size == 0);
    }
    bool isFull(){
        return (size == MAX_SIZE);
    }
    void enqueue(int x){
        if (isFull())
 {
            cout << "Queue is full. Cannot enqueue element.\n";
            return;
        }
        if (isEmpty()){
            front = rear = 0;
        }

        else {
            rear = (rear + 1) % MAX_SIZE;
        }
        arr[rear] = x;
        size++;
        cout << x << " enqueued into the queue.\n";
    }
    int dequeue() {
        if (isEmpty())
 {
            cout << "Queue is empty. Cannot dequeue element.\n";
            return -1;
        }
        int frontItem = arr[front];
        if (front == rear) {
            front = rear = -1;
        }
        else {
            front = (front + 1) % MAX_SIZE;
        }
        size--;
        return frontItem;
    }
    int peek() {
        if (isEmpty())
{
            cout << "Queue is empty.\n";
            return -1;
        }

        return arr[front];
    }
};

int main()
 {
    Queue queue;
    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);

    cout << "Front element: " << queue.peek() << endl;
    cout << queue.dequeue() << " dequeued from the queue.\n";
    cout << "Front element: " << queue.peek() << endl;

    cout << queue.dequeue() << " dequeued from the queue.\n";
    cout << "Front element: " << queue.peek() << endl;
    return 0;
}

