#include<iostream>
using namespace std;
 int main(){
    int i = 5;
    
    // created a refernece varible
    int &j = i;
    cout<< i<< endl; //output: 5
    i++;
    cout<< i<< endl;  // output: 6
    cout << j <<endl; // output: 6
    return 0;
 }