#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    int i=1;
    int val=1;
    while(i<=n){
    int k=1; // this variable k is taken to print space
    while(k<=n-i){
        cout<<" ";
    k++;
    }
            int j=1;
        while(j<=i){
            cout<<val;
        j++;
        val++;
        }
        cout<<endl;
        i++;
    }




}


