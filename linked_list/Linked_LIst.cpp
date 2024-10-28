#include<iostream>
#include<vector>
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

/*int main(){
    //dynamic node creation
    Node * Head = new Node(4);
    // Head -> data = 4;
    // Head -> next = NULL;
}*/

Node* convertArr2LL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1 ; i < arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover -> next = temp;
        mover = temp;
    }
    return head;
}

int main(){
    vector<int> arr = {2 , 5 , 7 , 9};
    Node* head = convertArr2LL(arr);
    cout << head -> data;
}