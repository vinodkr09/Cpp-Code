#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n"<< endl;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
    char initialchar= 'A' + i-1;
    while(j<=n){
            char ch=initialchar + j-1;
    cout<<ch;
            j++;

    }
    cout<<endl;
        i++;
    }






}
