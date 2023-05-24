#include<iostream>
using namespace std;
#define max 5
int queue[max];
int front = -1; 
int rear = -1;

void enqueue();
void dequeue();
bool isEmpty();
bool isFull();

void enqueue(int value) {
    
    if (rear == max - 1) {
        cout << "Queue is full";
    }
    else {
        
        front = 0;
        rear++;
        queue[rear] = value;
    } 
}

void dequeue() {
    if(rear == -1 || front > rear) {
        cout << "Queue is empty";
        return;
    }
    else {
        front++;
    }
}

void display() {
    if (front <= -1) {
        cout << "Queue is empty";
    }
    else {
        for(int i = front; i <= rear; i++) {
            cout << queue[i] << " ";
        }
    }
}

int main() {
    enqueue(8);
    enqueue(9);
    dequeue();
    dequeue();
    dequeue();
    display();
    return 0;
}