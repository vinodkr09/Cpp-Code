// TO FIND THE LARGEST ELEMENT IN ARRAY
#include<iostream>
using namespace std;
int main(){
    int n; // "n" represent the size of array that user wants to create
    cout<<"Enter n"<<endl;
    cin>>n;
    int input[100]; // Array name and size of array
    for(int i=0;i<n;i++){ // "i" is tbe index of current of current element
        cin>>input[i];  // taken input as array
    }
    int max=input[0]; // max is variable and we have assume intitally index "0" has the maximum element
    for(int i=1;i<n;i++){   // "i" will traverse from 2nd index i.e from i=1 to till last element
       if(input[i]>max){
        max=input[i];
       }   
    }
    cout<<"LARGEST:"<<max<<endl;
     
}

