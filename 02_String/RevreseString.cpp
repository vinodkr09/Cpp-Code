#include<iostream>
using namespace std;
void ReverseString(string &str){
    int n=str.length();
    int start=0, end=n-1;
    while(start<=end){
        swap(str[start], str[end]);
        start++;
        end--;
    }
}
int main(){
    string str;
    cout<<"Enter a String that you want to reverse: ";
    cin>> str;
   ReverseString(str);
   cout << "Reversed string :"<<str <<endl;
   return 0;
   
}
    



