#include<iostream>
using namespace std;

int main(){
    //pointer to int is created , and point to some garbage address 
    // int *p = 0;

    // cout << *p << endl;

    /*
    int i = 5;
    int *q = &i;
    cout << q << endl;
    cout << *q << endl;

    int *p = 0;
    p = &i;
    cout << p << endl;
    cout << *p << endl;
    */

    // int num = 5;
    // int a = num;
    // cout << "a before " << num << endl;
    // cout << "a before " << a << endl;
    // a++;
    // cout << "a after " << num << endl;
    // cout << "a after " << a << endl;

    // int *p = &num;
    // cout << "a before " << num << endl;
    // cout << "a before " << a << endl;
    // (*p)++;
    // cout << "a after " << num << endl;
    // cout << "a after " << a << endl;

    // cout << p << endl;
    // cout << *p << endl;

    // //copying a pointer
    // int *q = p;
    // cout << q << endl;
    // cout << *q<< endl;
    // cout << p << " - " << q << endl;
    // cout << *p << " - " << *q << endl;


    //important concept
    int i = 3;
    int *t = &i;
    // cout << (*t)++ << endl;
    // cout << *t << endl;
    // cout << ++(*t) << endl;
    // cout << *t << endl;

    *t = *t + 1;
    cout << *t << endl;

    cout << "before t " << t << endl;
    t = t + 1;
    cout << "after t " << t << endl;

    return 0;
}