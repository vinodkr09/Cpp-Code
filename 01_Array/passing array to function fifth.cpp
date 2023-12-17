// we have to print the array elements by passing array to function
#include<iostream>
using namespace std;
void printarray( int input[],int n){   // passing the array to function, and "n" is the size of array
   cout<<"print:"<<endl;
    for(int i=0;i<n;i++){
        cout<<input[i]<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    int input[100];
    cout<<"Enter Array Elements:";
    cout<<input<<endl; // this will print the zero index location of the memory address
    for(int i=0;i<n;i++){
        cin>>input[i];   // taken array input
    }
    printarray(input,n); // calling a function and taking array as an argument
}

