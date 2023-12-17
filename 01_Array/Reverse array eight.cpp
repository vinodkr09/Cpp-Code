#include<iostream>
using namespace std;
void reverse(int arr[], int n){
    int start=0; // zero is the starting index
    int end=n-1; // since index start from 0 and end at (n-1)
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[6]={1,4,6,10,9,34}; // for ODD number of array
    int brr[5]={3,5,12,43,2};  // for EVEN number of array
    reverse(arr, 6);
    reverse(brr ,5);
    printArray(arr, 6);
    printArray(brr,5);
    return 0;

}
