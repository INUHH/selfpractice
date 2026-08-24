#include <iostream>
using namespace std;

#define N 5

int q[N], front = -1, rear = -1;

void enqueue(int x) {
    if (rear == N - 1)
        cout << "Overflow\n";
    else {
        if (front == -1) front = 0;
        q[++rear] = x;
        cout << x << " inserted\n";
    }
}

void dequeue() {
    if (front == -1 || front > rear)
        cout << "Underflow\n";
    else
        cout << q[front++] << " deleted\n";
}

void display() {
    if (front == -1 || front > rear)
        cout << "Queue is empty\n";
    else {
        cout << "Queue: ";
        for (int i = front; i <= rear; i++)
            cout << q[i] << " ";
        cout << endl;
    }
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