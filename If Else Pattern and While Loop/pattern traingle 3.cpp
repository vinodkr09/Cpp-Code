#include<iostream>
using namespace std;
int main(){
    int n; // "n" represent the total number of rows that we want to print
    cout<<"Enter n"<<endl;
    cin>>n;
    int i=1; // "i"is no. of columns in ith row
    while(i<=n){
        int j=1;  //"j" represent the column number
        while(j<=i){
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;

    }


}
