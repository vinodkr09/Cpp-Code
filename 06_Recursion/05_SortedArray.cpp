#include<iostream>
using namespace std;
bool isSorted(int arr[], int size){

    //base case
    if(size == 0 || size == 1){  // If the array  has zero or one element, it is always sorted.
    return true;
    }
    
    //recursive case:
    if(arr[0] > arr[1]){
        return false; // means array sorted hi nahi hai
        }
        else{
            bool remainingPart = isSorted(arr + 1, size-1); // calling the function for remaining part of the array
            return remainingPart;
        }
    
}


int main(){
    int arr[5] = {1,4,6,8,9};
    int size =5;
    int ans = isSorted(arr, size);
    if(ans){
        cout<<"Array  is Sorted"<< endl;
    }
    else{
        cout<< "Array is not sorted"<< endl;
    }
}