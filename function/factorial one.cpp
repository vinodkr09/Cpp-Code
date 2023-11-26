/* To find ncr=n!/r!(n-r)!*/
#include<iostream>
using namespace std;
int factorial(int n){ 
    int ans=1;
    int i=1;
    while(i<=n){
        ans = ans*i;
        i++;
    }  
    return ans;
}
int main(){
    int n,r;
        cin>>n>>r;
        int fact_n=factorial(n); /* function call i.e factorial*/
        int fact_r=factorial(r); /*function call*/
        int fact_n_r=factorial(n-r); /*function call*/
        int ans=fact_n/(fact_r * fact_n_r);
        cout<<ans<<endl;
        
    
}