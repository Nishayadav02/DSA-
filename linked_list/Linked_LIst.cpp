#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node * next;

    Node(int value){
        data = value;
        next = NULL;
    }
};

/*int main(){
    //statically node creation
    Node A1;
    A1.data = 4;
    A1.next = NULL;
}*/

int main(){
    //dynamic node creation
    Node * Head = new Node(4);
    // Head -> data = 4;
    // Head -> next = NULL;
}