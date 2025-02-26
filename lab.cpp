#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
Node* createNode(int data);
void deleteFromBeginning(Node** head);
void deleteFromEnd(Node** head);
void deleteAtPosition(Node** head, int position);
void printList(Node* head);

int main() {
    Node* head = NULL;
    head = createNode(10);
    head->next = createNode(20);
    head->next->next = createNode(30);
    head->next->next->next = createNode(40);

    cout << "Original List: ";
    printList(head);
    deleteAtPosition(&head, 2);
    cout << "After deletion: ";
    printList(head);
    return 0;
}

Node* createNode(int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
void deleteFromBeginning(Node** head) {
    if (*head == NULL) {
        cout << "List is empty." << endl;
        return;
    }
    Node* temp = *head;
    *head = (*head)->next;
    delete temp;
}
void deleteFromEnd(Node** head) {
    if (*head == NULL) {
        cout << "List is empty." << endl;
        return;
    }
    if ((*head)->next == NULL) {
        delete *head;
        *head = NULL;
        return;
    }
    Node* temp = *head;
    Node* prev = NULL;

    while (temp->next != NULL) {
        prev = temp;
        temp = temp->next;
    }
    prev->next = NULL;
    delete temp;
}
void deleteAtPosition(Node** head, int position) {
    if (*head == NULL || position <= 0) {
        cout << "Invalid position." << endl;
        return;
    }
    if (position == 1) {
        deleteFromBeginning(head);
        return;
    }
    Node* temp = *head;
    Node* prev = NULL;
    int count = 1;

    while (temp != NULL && count < position) {
        prev = temp;
        temp = temp->next;
        count++;
    }
    if (temp == NULL) {
        cout << "Position exceeds list size." << endl;
        return;
    }

    prev->next = temp->next;
    delete temp;
}
void printList(Node* head) {
    if (head == NULL) {
        cout << "List is empty." << endl;
        return;
    }

    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
