#include<iostream>
using namespace std;

/*class Node {

    public:
    int data;
    Node * next;

};

int main() {
    Node * node1 = new Node();
    cout << node1 -> data << endl;
    cout << node1 -> next << endl;

    return 0;
}*/

/*class Node {

    public:
    int data;
    Node * next;

    //constructor
    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }

};

int main() {
    Node * node1 = new Node(10);
    cout << node1 -> data << endl;
    cout << node1 -> next << endl;

    Node * head = node1;

    return 0;
}*/

/*class Node {

    public:
    int data;
    Node * next;

    //constructor
    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }

};

void insertAtHead(Node* &head , int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void print(Node* &head) {
    Node* temp = head;

    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main() {
    Node * node1 = new Node(10);

    //head pointed to node1
    Node * head = node1;
    print(head);
    
    insertAtHead(head , 12);
    print(head);

    insertAtHead(head , 15);
    print(head);

    return 0;
}*/

/*class Node {

    public:
    int data;
    Node * next;

    //constructor
    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }

};

void insertAtTail(Node* &tail , int d){
    //new node create
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = tail -> next;
}

void print(Node* &head) {
    Node* temp = head;

    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
} 

int main() {
    Node * node1 = new Node(10);

    //head pointed to node1
    Node * head = node1;
    Node * tail = node1;

    print(head);
    
    insertAtTail(tail , 12);
    print(head);

    insertAtTail(tail , 15);
    print(head);

    return 0;
}*/

/*class Node {

    public:
    int data;
    Node * next;

    //constructor
    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }

};

void insertAtTail(Node* &tail , int d){
    //new node create
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = tail -> next;
}

void insertAtPosition(Node* &head , int position , int d){
    Node* temp = head;
    int cnt = 1;
    while(cnt < position - 1){
        temp = temp -> next;
        cnt++;
    }

    //crreating a node for d
    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
}

void print(Node* &head) {
    Node* temp = head;

    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
} 

int main() {
    Node * node1 = new Node(10);

    //head pointed to node1
    Node * head = node1;
    Node * tail = node1;

    print(head);
    
    insertAtTail(tail , 12);
    print(head);

    insertAtTail(tail , 15);
    print(head);

    insertAtPosition(head , 3 , 22);
    print(head);

    return 0;
}*/

/*class Node {

    public:
    int data;
    Node * next;

    //constructor
    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }

};

void insertAtHead(Node* &head , int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &tail , int d){
    //new node create
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = tail -> next;
}

void insertAtPosition(Node* &head , int position , int d){

    if(position == 1){
        insertAtHead(head , d);
        return;
    }
    Node* temp = head;
    int cnt = 1;
    while(cnt < position - 1){
        temp = temp -> next;
        cnt++;
    }

    //crreating a node for d
    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
}

void print(Node* &head) {
    Node* temp = head;

    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
} 

int main() {
    Node * node1 = new Node(10);

    //head pointed to node1
    Node * head = node1;
    Node * tail = node1;

    print(head);
    
    insertAtTail(tail , 12);
    print(head);

    insertAtTail(tail , 15);
    print(head);

    insertAtPosition(head , 1 , 22);
    print(head);

    return 0;
}*/


class Node {

    public:
    int data;
    Node * next;

    //constructor
    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }

}; 

void insertAtHead(Node* &head , int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &tail , int d){
    //new node create
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = tail -> next;
}

void print(Node* &head) {
    Node* temp = head;

    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
} 

void insertAtPosition(Node* &tail , Node* &head , int position , int d){
    //insert at start 
    if(position == 1){
        insertAtHead(head , d);
        return;
    }
    Node* temp = head;
    int cnt = 1;

    while(cnt < position - 1){
        temp = temp -> next;
        cnt++;
    }

    //inserting at last position
    if(temp -> next == NULL){
        insertAtTail(tail , d);
        return ;
    }

    //creating a node for d
    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
} 

int main() {
    Node * node1 = new Node(10);

    //head pointed to node1
    Node * head = node1;
    Node * tail = node1;

    print(head);
    
    insertAtTail(tail , 12);
    print(head);

    insertAtTail(tail , 15);
    print(head);

    insertAtPosition(tail , head , 4 , 22);
    print(head);

    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    return 0;
}