#include<iostream>
using namespace std;

/*class person {

    //properties
    int health;

};

int main()
{

    //creation of object
    person h1;

    cout << "size : " << sizeof(h1) << endl;

    return 0;
}
*/

/*

//empty class ke case me ek byte size milta hai

class person {

    //properties

};

int main()
{

    //creation of object
    person h1;

    cout << "size : " << sizeof(h1) << endl;

    return 0;
}
*/

/*
class person {

    //properties

    public:
    int health;
    char level;

    void print() {
        cout << level << endl;
    }

};

int main()
{

    //creation of object
    person h1;

    h1.health = 70;
    h1.level = 'A';

    cout << "Health is : " << h1.health << endl;
    cout << "Level is : " << h1.level << endl;

    //cout << "size : " << sizeof(h1) << endl;

    return 0;
}
*/

/*
class person {

    //properties

    private:
    int health;
    public:
    char level;

    void print() {
        cout << level << endl;
    }

    int getHealth(){
        return health;
    }

    char getLevel() {
        return level;
    }

    void setHealth(int h) {
        health = h;
    }
    void setLevel(char ch) {
        level = ch;
    }

};
*/

/*class person {

    //properties

    private:
    int health;
    public:
    char level;

    void print() {
        cout << level << endl;
    }

    int getHealth(){
        return health;
    }

    char getLevel() {
        return level;
    }

    void setHealth(int h , char name) {
        if(name == "A"){ //only A can be change its value otherwise show error
            health = h;
        }
    }
    void setLevel(char ch) {
        level = ch;
    }

};*/

/*nt main()
{

    //creation of object
    /*person h1;
    cout << "size is : " << sizeof(h1) << endl;   // output is 8 because padding and greedy alignment

    /*1. Padding is introduced in memory allocation to ensure proper alignment of data within structures. CPUs have specific memory alignment requirements for different types of data. When you have a structure containing different data types, the compiler might insert "padding bytes" between members to align them according to the CPU's requirements. 

    2. Greedy alignment refers to the practice of arranging the members of a structure or class in such a way that padding is minimized. By placing members with larger alignment requirements before those with smaller alignment requirements, you can potentially reduce the amount of padding required.
    In languages like C++, where memory layout has a significant impact on performance due to cache lines and memory access patterns, arranging members to minimize padding can lead to better memory utilization and potentially improved runtime efficiency.


    cout << "health of person : " << h1.getHealth() << endl;
    //use setter
    h1.setHealth(70);

    h1.level = 'A';

    cout << "Health is : " << h1.getHealth() << endl;
    cout << "Level is : " << h1.level << endl;

    return 0;
}*/

/*
int main()
{
    //static allocation
    person a;
    a.setHealth(80);
    a.setLevel('B');
    cout << "level is : " << a.level << endl;
    cout << "health is : " << a.getHealth() << endl;

    //dynamic allocation
    person *b = new person;
    b->setLevel('A');
    b->setHealth(70);
    cout << "level is : " << (*b).level << endl;
    cout << "health is : " << (*b).getHealth() << endl;

    //alternate method

    cout << "level is : " << b->level << endl;
    cout << "health is : " << b->getHealth() << endl;

}
*/

/*class person {

    //properties

    private:
    int health;
    public:
    char level;

    person() {
        cout << "constructor called" << endl;
    }

};

int main()
{
    //cout << "Before" << endl;
    //object created statically
    person a;
    //cout << "After" << endl;

    //dynamically
    person *h = new person();
     
}*/

/*class person {

    //properties

    private:
    int health;
    public:
    char level;

    //parameterised constructor
    person(int health)
    {
        cout << "this -> " << this << endl;
        this -> health = health;
    }

    void print() {
        cout << level << endl;
    }

    int getHealth(){
        return health;
    }

    char getLevel() {
        return level;
    }

    void setHealth(int h) {
        health = h;
    }
    void setLevel(char ch) {
        level = ch;
    }

};*/

/*int main() {
    person a(10);
    cout << "Address of a : " << &a << endl;

    //dynamically
    person *h = new person(11);

    
}*/
class person {

    //properties

    private:
    int health;
    public:
    char level;

    //parameterised constructor
    person(int health)
    {
        this -> health = health;
    }

    person(int health,char level)
    {
        this -> level = level;
        this -> health = health;
    }

    void print() {
        cout << level << endl;
    }

    int getHealth(){
        return health;
    }

    char getLevel() {
        return level;
    }

    void setHealth(int h) {
        health = h;
    }
    void setLevel(char ch) {
        level = ch;
    }

};

int main() 
{
    person a(10);
    //cout << "Address of a : " << &a << endl;
    a.print();

    //dynamically
    person *h = new person(11);
    h->print();
    
    person temp(22 , 'B');
    temp.print();

}