#include<iostream>
using namespace std;

int main()
{
    int num = 5;
    cout << num << endl;

    //address of operator - &

    cout << "address of num is : " << &num << endl;

    int *ptr = &num;

    cout << "Address is : " << ptr << endl;
    cout << "Value is : " << *ptr << endl;

    double d = 4.3;
    double *p2 = &d;

    cout << "Address of p2 : " << p2 << endl;
    cout << "Value of p2 : " << *p2 << endl;

    cout << "size of integer is : " << sizeof(num) << endl;
    cout << "size of pointer is : " << sizeof(ptr) << endl;
    cout << "size of pointer is : " << sizeof(p2) << endl;

    return 0;

}