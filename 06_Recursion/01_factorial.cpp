#include<iostream>
using namespace std;
int factorial(int n){

    //base case
    if(n == 0){
        return 1;
    }
    
    // Recursive Relation
    int smallerProblem = factorial(n-1);
    int biggerProblem = n * smallerProblem;
    return biggerProblem;
}

int main(){
    int n;
    cout<< "Enter  a number: ";
    cin >> n;
    int ans = factorial(n);
    cout<< ans << endl;
    return 0;
}