#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node * next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

class Stack {
    Node * top;
    int size;   //actual size of stack

    public:
    Stack() {
        top = NULL;
        size = 0;
    }

    //Push
    void push(int value) {
        Node * temp = new Node(value);
        if(temp == NULL) {
            cout << "Stack Overflow" << endl;
        }
        else {
            temp -> next = top;
            top = temp;
            cout << "Pushed " << value << " in the stack" << endl;
            size++;
        }
    }

    //Pop
    void pop() {
        if(top == NULL) {
            cout << "stack underflow" << endl;
        }
        else {
            Node * temp = top;
            cout << "Poppped " << top -> data << " from the stack" << endl;
            top = top -> next;
            delete temp;
            size--;
        }
    }

    //Peek
    int peek() {
        if(top == NULL) {
            cout << "stack is empty" << endl;
            return -1;
        }
        else {
            return top -> data;
        }
    }   
    
    // IsEmpty
    bool IsEmpty() {
        return top == NULL;
    }

    // IsSize
    int IsSize() {
        return size;
    }
};

int main() {
    Stack s;
    s.push(6);
    s.push(12);
    s.push(27);
    s.push(34);
    s.pop();
    s.pop();
    cout << s.IsSize() << endl;
    cout << s.peek() << endl;
    cout << s.IsEmpty() << endl;
    
}