#include<iostream>
using namespace std; 
int main(){
    int arr[5] = {1,2,3,4,5};
    char ch[6] = "abcde";

    cout<< arr << endl;  // prints address
    //Attention here
    cout<< ch << endl;   // but here prints entire content

char *c = &ch[0];
cout << c << endl;  // prints the entire  string abcde



char temp = 'z';
char *p = &temp;
cout << p << endl;


    return 0;

    
}