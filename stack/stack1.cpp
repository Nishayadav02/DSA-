#include<iostream>
using namespace std;

class Stack {
    int * arr;
    int size;
    int top;

    public:

    bool flag;

    //constructor

    Stack(int s) {
        size = s;
        top = -1;
        arr = new int[s];
        flag = 1;
    }

    //Push
    void push(int value) {
        if(top == size - 1) {
            cout << "stack overflow" << endl;
        }
        else {
            top++;
            arr[top] = value;
            cout << "Pushed " << value << " into the stack" << endl;
            flag = 0;
        }
    }

    //Pop
    void pop() {
        if(top == -1) {
            cout << "Popped " << arr[top] << " from the stack" << endl;
            top--;
            if(top == -1) {
                flag = 1;
            }
        }
    }

    //Peek
    int peek() {
        if(top == -1) {
            cout << "stack is empty" << endl;
            return -1;
        }
        else {
            return arr[top];
        }
    }

    //IsEmpty
    bool IsEmpty() {
        return top == -1;
    }

    //IsSize
    int IsSize() {
        return top + 1;
    }
};

int main() {
    Stack s(5);
    s.push(-1);
    int value = s.peek();
    if(s.flag == 0) {
        cout << value << endl;
    }
}