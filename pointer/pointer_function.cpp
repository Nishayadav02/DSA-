#include<iostream>
using namespace std;

/*void print(int *p)
{
    cout << *p << endl;
    cout << p << endl;
}

void update(int *p){
    // p = p + 1;
    // cout << "inside " << p << endl;
    *p = *p + 1;

}

int main(){
    int value = 5;
    int *p = &value;

    print(p);

    cout << "before " << p << endl;
    update(p);
    cout << "after " << p << endl;

    cout << "before " << *p << endl;
    update(p);
    cout << "after " << *p << endl;

    return 0;
}*/

int getsum(int arr[] , int n) // int getsum(int *arr , int n)->both are same
{

    cout <<endl << "size of array is " <<sizeof(arr) << endl;
    int sum = 0; 
    for(int i = 0; i < n ; i++){
        sum += arr[i];
    }
    return sum;
}

// int main(){
//     int arr[5] = {1,2,3,4,5};

//     cout << "sum is = " << getsum(arr , 5) << endl;
// }

int main(){
    int arr[6] = {1,2,3,4,5 ,8};

    cout << "sum is = " << getsum(arr+3 , 3) << endl;
}