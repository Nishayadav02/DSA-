#include<iostream>
using namespace std;

class Queue
{
    int * arr;
    int front , rear , size;

    public:
    //constructor
    Queue(int n) {
        arr = new int[n];
        size = n;
        front = rear = -1;
    }

    //check if queue is empty or not
    bool IsEmpty() {
        return front == -1;
    }

    //check queue is full or not
    bool IsFull() {
        return rear == size - 1;
    }

    //push element into the queue
    void push(int x) {
        //queue is empty
        if(IsEmpty()) {
            front = rear = 0;
            arr[0] = x;
            cout << "Pushed " << x << " into the queue\n";
            return;
        }
        //queue is full
        else if(IsFull()) {
            cout << "queue overflow \n";
            return;
        }
        //some elements are present in the queue
        else {
            rear = rear + 1;
            arr[rear] = x;
            cout << "Pushed " << x << " into the queue\n";
        }
    }

    //pop element from the stack
    void pop() {
        // queue is empty
        if(IsEmpty()) {
            cout << "queue underflow";
            return;
        }
        //queue has elements
        else {
            if(front == rear) {
                int popped = arr[front];
                cout << "Popped " << popped << " from the queue\n";
                front = rear = -1;
            }
            else {
                int popped = arr[front];
                cout << "Popped " << popped << " from the queue\n";
                front  = front + 1;
            }
        }
    }

    int start() {
        if(IsEmpty()) {
            cout << "queue is empty";
            return -1;
        }
        else {
            return arr[front];
        }
    }
};

int main() {
    Queue q(5);

    q.push(5);
    q.push(15);
    q.push(25);
    q.push(35);
    q.push(45);
    q.pop();
    int x = q.start();
    if(!q.IsEmpty()){
        cout <<x << " " ;
    }
}