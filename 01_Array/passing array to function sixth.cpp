// To print the initialized array of the age
#include<iostream>
using namespace std;
void printage(int age[],int n){ // passing the array to function, where "n" is the size of the array 
    for(int i=0;i<n;i++){
        cout<<age[i]<<endl;
    }
}
int main(){
    int age[5]={23,44,56,12,78};
    printage(age,5); // calling function and taking array as the argument
    return 0;

    
}