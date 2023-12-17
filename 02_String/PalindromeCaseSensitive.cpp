
// This code is valid only for case sensitive means whether all strings should be in capital letters or small letters
#include<iostream>
#include<cstring>
using namespace std;
bool checkPalindrome(char a[], int n){
    int start=0, end=n-1;
    while(start<=end){
        if(a[start] != a[end]){
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
    return 0;

}