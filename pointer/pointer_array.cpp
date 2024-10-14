#include<iostream>
using namespace std;

int main(){
    // int arr[10] = {20 , 40 , 34 , 87};

    // cout << "address of first memory block is : " << arr << endl;
    // cout << "address of first memory block is : " << &arr[0] << endl;

    // cout << "value of index zero : " << arr[0] << endl;
    // cout << "value of index zero : " << *arr << endl;

    // cout << "value of zeroth  index after adding 1 : " << *arr + 1 << endl;
    // cout << "value of zeroth index after adding 1" << *(arr) + 1 << endl;


    // cout <<  "value of first index : " << *(arr + 1) << endl;
    
    // cout << arr[2] << endl;
    // cout << *(arr + 2) << endl;

    // //it is also correct
    // int i = 3;
    // cout << i[arr] << endl;

    // int temp[10] = {1,2};
    // cout << "size  " << sizeof(temp) << endl;
    // cout << "1st  " << sizeof(*temp) << endl;
    // cout << "2nd  " << sizeof(&temp) << endl;

    // int a[20] = {1,2,3,4};
    // cout << &a[0] << endl;
    // cout << &a << endl;
    // cout << a << endl;

    // int *p = &a[0];
    // cout << p << endl;
    // cout << *p << endl;
    // cout << &p << endl;

    int arr[10];

    //error
    //arr = arr + 1;

    int *ptr = &arr[0];
    cout << ptr << endl;
    ptr = ptr + 1;
    cout << ptr << endl;

    return 0;
}