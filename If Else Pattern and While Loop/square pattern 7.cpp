// HERE WE HAVE TO PRINT THE ROW NUMBER
#include<iostream>
using  namespace std;
int main(){
    int n;   // "n" represent the total number of rows that we want to print
    cout<<"Enter n"<<endl;
    cin>>n;
    int i=1;  // "i" represent row number
    while(i<=n){
            int j=1;  //"j" represent the column number
                while(j<=n){
                    cout<<i;  // don't do mistake to print character like this "i" we have to print value of i
                    j++;
                }
                cout<<endl;
                i++;

    }


}
