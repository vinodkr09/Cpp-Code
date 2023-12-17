#include<iostream>
#include<climits> // this header file defines constant with limits of fundamental intergal types
using namespace std;
int main(){
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    int input[100];
    for( int i=0;i<n;i++){
        cin>>input[i];
    }
    int max=INT_MIN;  // Minimum value for an object type int 
    for(int i=0;i<n;i++){
        if(input[i]>max){
            max=input[i];
        }
    }
    cout<<"LARGEST:"<<max<<endl;

}