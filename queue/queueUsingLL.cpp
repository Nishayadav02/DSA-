#include<iostream>
using namespace std;

//queue implementation using linked list

class Node
{
    public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

class Queue
{
    Node * front;
    Node * rear;

    public:
    Queue() 
    {
        front = rear = NULL;
    }

    //queue is empty or not
    bool IsEmpty()
    {
        return front == NULL;
    }

    //push element into the queue
    void push(int x)
    {
        //empty
        if(IsEmpty()) {
            cout << "Pushed " << x << " into the queue\n";
            front = rear = new Node(x);
            return;
        }
        //some elements
        else {
            rear -> next = new Node(x);
            if(rear -> next == NULL) 
            {
                cout << "Queue Overflow\n";
                return;
            }
            cout << "Pushed " << x << " into the queue\n";
            rear = rear -> next;
        }
    }

    void pop() {
        //empty or not
        if(IsEmpty()) {
            cout << "queue underflow\n";
        }
        else
        {
            cout << "popped " << front -> data << " from the queue\n";
            Node * temp = front;
            front = front -> next;
            delete temp;
        }
    }

    int start()
    {
        if(IsEmpty()) 
        {
            cout << "queue is empty\n";
            return -1;
        }
        else
        return front -> data;
    }
};

int main()
{
    Queue q;
    q.push(5);
    q.push(15);
    q.push(52);
    q.push(53);
    q.push(45);
    q.pop();
    q.pop();
    cout << q.start() << endl;
}