#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* rear = NULL;

void enqueue(int x) {
    Node* temp = new Node;
    temp->data = x;

    if (rear == NULL) {
        rear = temp;
        rear->next = rear;
    } else {
        temp->next = rear->next;
        rear->next = temp;
        rear = temp;
    }

    cout << x << " inserted\n";
}

void dequeue() {
    if (rear == NULL) {
        cout << "Underflow\n";
        return;
    }

    Node* front = rear->next;
    cout << front->data << " deleted\n";

    if (front == rear)
        rear = NULL;
    else
        rear->next = front->next;

    delete front;
}

void display() {
    if (rear == NULL) {
        cout << "Queue is empty\n";
        return;
    }

    Node* front = rear->next;
    Node* temp = front;

    cout << "Circular Queue: ";

    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != front);

    cout << endl;
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    dequeue();
    enqueue(40);
    enqueue(50);
    display();

    return 0;
}