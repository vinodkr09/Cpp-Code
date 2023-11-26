#include<iostream>
using namespace std;
bool isPrime(int n){
    int d=2;
    while(d<n){
        if(n%d==0){
            return false;
        }
        d++;
    }
    return true;
}
int main(){
    bool ans=isPrime(31); /*function call isPrime*/
    cout<<ans<<endl;
    ans=isPrime(85);
    cout<<ans<<endl;

}
/* 1 is for TRUE and 0  is for FALSE*/