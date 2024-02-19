#include<iostream>
using namespace std;
int getSum(int *arr, int n){
    int sum = 0;
    for(int i =0; i<n; i++){
        sum = sum + arr[i];

    }
    return sum;

}

int main(){
    int n;
    cin >> n;

    // variable size array which is called Dynamic Memory Allocation
    int *arr = new int[n];  // here new is keyword to create Dynamic memory allocation and [n] means create a dynamic array of size n

    // taking input  from the user and storing it in an array of size 'n'
      for(int i=0; i<n; i++){
        cin >> arr[i];
      }
      int ans = getSum(arr, n);
      cout << "The Sum of all elements in the array is: "<<ans;

}