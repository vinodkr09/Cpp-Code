#include<iostream>
using namespace std;
int main(){
    int i = 5;
    int *p = &i;
    int **p2 = &p;
    cout<<" SB sahi chal raha hai"<< endl;

    // next three statements will print same value i.e. address of i
    cout << &i << endl;  // output: 0x47dd5ff9b4
    cout << p << endl;  // output:  0x47dd5ff9b4 
    cout << *p2 << endl; // output: 0x47dd5ff9b4

  // Next two statements will print same value i.e. address of p
    cout<< &p << endl;   // output: 0xe3b85ffe68
    cout << p2 << endl;  // output: 0xe3b85ffe68

     // Next three statements will print same value i.e. value of i  which is pointed by p
    cout<< i << endl; // output: 5
    cout<< *p << endl; // output: 5
    cout<< **p2 << endl;  // output: 5 
    return 0;





}