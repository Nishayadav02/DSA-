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
    Node * Head;
    Head = new Node(4);

    cout << Head -> data << endl;
    cout << Head -> next << endl;
    //output
    // Head -> data = 4;
    // Head -> next = NULL;
}*/

/*int main() {
    Node * Head;
    if(Head == NULL) {
        Head = new Node(4);
    }
    else{
        Node * temp;
        temp = new Node(4);
        temp -> next = Head;
        Head = temp;
    }

    cout << Head -> data << endl;
    cout << Head -> next << endl;

}*/


//conversion of array to linked list

// Node* convertArr2LL(vector<int> &arr){
//     Node* head = new Node(arr[0]);
//     Node* mover = head;
//     for(int i = 1 ; i < arr.size(); i++){
//         Node* temp = new Node(arr[i]);
//         mover -> next = temp;
//         mover = temp;
//     }
//     return head;
// }

//length of linked list

// int lengthOfLL(Node* head){
//     int cnt = 0;
//     Node* temp = head;
//     while(temp){
//         temp = temp -> next;
//         cnt++;
//     }
//     return cnt; 
// }

//search an element
// int checkIfPresent(Node* head , int val){
//     Node* temp = head;
//     while(temp){
//         if(temp -> data == val) return 1;
//         temp = temp -> next;
//     }
//     return 0;
// }

// int main(){
//     vector<int> arr = {2 , 5 , 7 , 9};
//     Node* head = convertArr2LL(arr);
//     // cout << head -> data;
 
//     Node* temp = head;
//     while(temp){
//         cout << temp -> data << " ";
//         temp = temp -> next;
//     } 

//     cout << endl;

//     cout << lengthOfLL(head) ;

//     cout << endl;

//     cout << checkIfPresent(head , 5);
// }