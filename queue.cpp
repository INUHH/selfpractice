#include <bits/stdc++.h>
using namespace std;
#define MAX 5
int arr[MAX];
int front =-1,rear=-1;
void insertRear(int value){
    if (rear==MAX-1){
        cout<<"deque is full"<<endl;
    }
    if (front==-1)
    front=rear=0;
    else
    rear++;
    arr[rear]=value;
}
void insertFront(int value){
    if(front==0){
        cout<<"deque is full"<<endl;
        return;
    }
    if(front==-1)
    front=rear=0;
    else
    front--;
    value;
}
void deleteRear(){
    if(front==-1){
        cout<<"deque is empty"<<endl;
        return;
    }
    cout<<"deleted: "<<arr[rear]<<endl;
    if (front==rear)
    front=rear=-1;
    else
    rear--;
}
void deleteFront(){
    if(front==-1){
        cout<<"deque is empty"<<endl;
        return;
    }
    cout<<"deleted: "<<arr[front]<<endl;
    if(front==rear)
    front=rear=-1;
    front++;
}
void display(){
if (front==-1){
    cout<<"deque is empty";
    return;
}
cout<<"deque:";
for(int i=front;i<=rear;i++)
cout<<arr[i]<<" ";
cout<<endl;
}
int main() {
	// your code goes here
insertRear(10);
insertRear(20);
insertRear(30);
insertFront(5);
display();
deleteRear();
display();
deleteFront();
display();
return 0;
}
