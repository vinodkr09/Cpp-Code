#include<iostream>
using namespace std;
int main(){
    // Take array input from user
    int n; //"n" represent the size of array that user wants to create
    cout<<"Enter n"<<endl;
    cin>>n;
    int input[100];
    for(int i=0;i<n;i++){  // "i" is the index of current element
        cin>>input[i];
    }
    //Print array
    for(int i=0;i<n;i++){
        cout<<input[i]<<endl;
    }
}