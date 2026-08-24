#include <iostream>
using namespace std;

#define N 5

int q[N], front = -1, rear = -1;

void enqueue(int x) {
    if ((rear + 1) % N == front) {
        cout << "Overflow\n";
        return;
    }

    if (front == -1)
        front = rear = 0;
    else
        rear = (rear + 1) % N;

    q[rear] = x;
    cout << x << " inserted\n";
}

void dequeue() {
    if (front == -1) {
        cout << "Underflow\n";
        return;
    }

    cout << q[front] << " deleted\n";

    if (front == rear)
        front = rear = -1;
    else
        front = (front + 1) % N;
}

void display() {
    if (front == -1) {
        cout << "Queue is empty\n";
        return;
    }

    cout << "Circular Queue: ";
    int i = front;

    while (true) {
        cout << q[i] << " ";
        if (i == rear)
            break;
        i = (i + 1) % N;
    }

    cout << endl;
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    dequeue();
    dequeue();
    enqueue(50);
    enqueue(60);
    display();

    return 0;
}