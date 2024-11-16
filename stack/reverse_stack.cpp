#include<iostream>
#include<stack>
using namespace std;

/*void Reverse(stack<int> &St) {
    stack<int> s;

    // Move elements from the original stack to the auxiliary stack
    while (!St.empty()) {
        int num = St.top();
        St.pop();
        s.push(num);
    }

    // Move elements back to the original stack
    while (!s.empty()) {
        St.push(s.top());
        s.pop();
    }
}

int main(){
    stack<int> myStack;

    // Push some elements onto the stack
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);
    myStack.push(4);
    myStack.push(5);

    cout << "Original stack: ";
    // Display original stack
    stack<int> tempStack = myStack; // Temporary stack to display elements
    while (!tempStack.empty()) {
        cout << tempStack.top() << " ";
        tempStack.pop();
    }
    cout << endl;

    // Reverse the stack
    Reverse(myStack);

    cout << "Reversed stack: ";
    // Display reversed stack
    while (!myStack.empty()) {
        cout << myStack.top() << " ";
        myStack.pop();
    }
    cout << endl;

    return 0;
}*/

int main(){
    cout << ((10) % 6) << endl;
    cout << ((-10) % 6) << endl;
}
