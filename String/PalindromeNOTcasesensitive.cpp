#include<bits/stdc++.h>
//#include<iostream>
//#include<cstring>
using namespace std;
char tolowercase(char ch){     // this function is created to convert every input uppercase letter into output smaller letter
    if(ch >='a' && ch <='z'){
        return ch;
    }
    else{
        char temp= ch - 'A' + 'a';
        return temp;
    }
}
bool checkPalindrome(char a[], int n){
    int start=0, end=n-1;
    while(start<=end){
        if(tolowercase(a[start]) != tolowercase(a[end])){
            return false; 
        }
        else{
            start++;
            end--;
        }
    }
    return true; 
}
int main(){
    char arr[20];
    cout<<"Enter the string :";
    cin>>arr;
    cout<<"Is it Palindrome : "<< checkPalindrome(arr, strlen(arr))<<endl;  // strlen function is used to find the length of the character array
    cout<<" CHARACTER IS "<< tolowercase('A')<<endl;
    cout<< " CHARACTER IS "<< tolowercase('b')<<endl;
    return 0;

}