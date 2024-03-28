#include<iostream>
using namespace std;
bool binarySearch(int arr[], int start, int end, int key){
     
     //Base case
     if(start > end) //  Element is not present in the array
        return false;

        int mid = start  + (end - start)/2; // Find  the middle element of the current range

        // Element is found
        if(arr[mid] == key)
        return true;

        if(key > arr[mid]){
            return  binarySearch(arr, mid+1, end, key);// Recursively search in the right half
        }
        else{
            return binarySearch(arr, start, mid-1, key);  // Recursively search in the left half

        }
}

int main(){
    int arr[] = {2,4,6,8, 10};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key = 10;
    int result = binarySearch(arr, 0, size-1, key);
    cout<< "Key is present or Not: " << result << endl;
    return 0;


}