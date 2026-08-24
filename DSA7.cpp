#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node *front = NULL, *rear = NULL;

void enqueue(int x) {
    Node* temp = new Node;
    temp->data = x;
    temp->next = NULL;

    if (rear == NULL)
        front = rear = temp;
    else {
        rear->next = temp;
        rear = temp;
    }

    cout << x << " inserted\n";
}

void dequeue() {
    if (front == NULL) {
        cout << "Underflow\n";
        return;
    }

    Node* temp = front;
    cout << temp->data << " deleted\n";
    front = front->next;

    if (front == NULL)
        rear = NULL;

    delete temp;
}

void display() {
    if (front == NULL) {
        cout << "Queue is empty\n";
        return;
    }

    cout << "Queue: ";
    Node* temp = front;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    dequeue();
    enqueue(40);
    display();

    return 0;
}