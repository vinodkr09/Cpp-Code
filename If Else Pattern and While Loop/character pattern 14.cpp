#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    int i=1;
    while(i<=n){
            int j=1;
            while(j<=n){
                char ch='A' + j-1;
                cout<<ch;
                j++;
            }
            cout<<endl;
        i++;
    }


    /* LOGIC:It depends on j show we will print j and do this 'A'+j-1    */









}
