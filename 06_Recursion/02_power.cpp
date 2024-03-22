#include<iostream>
using namespace std;
int power(int n){

    //Base case
    if(n==0){
        return 1;
    }

    // Recursive Relation
    int SmallerProblem = power(n-1);
    int BiggerProblem = 2 * SmallerProblem;
    return BiggerProblem;
}
int main(){
    int n;
    cout<<"Enter power: "<< endl;
    cin>> n;
    int ans = power(n);
    cout<< ans << endl;

}