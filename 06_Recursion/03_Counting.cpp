#include<iostream>
using namespace std;
print(int n){

    //base case
    if(n == 0){
        return 1;
    }
    cout << n << endl;

    //Recursive Relation
    print(n-1);
}

int main(){
    int n;
    cout<<"Enter Number: "<< endl;
    cin>> n;
    print (n);
    return 0;

}