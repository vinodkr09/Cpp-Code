#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    bool divided=false;
    for(int d=2;d<n;d++){
        if(n%d==0){
            divided=true;
            break;
        }
    }
        if(divided){
            cout<<"NOT PRIME"<<endl;
        }
        else{
            cout<<"PRIME"<<endl;
        }
    

}