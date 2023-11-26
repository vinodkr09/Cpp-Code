#include<iostream>
using namespace std;
int binarySearch(int arr[],int size, int key){
    int start=0;
    int end=size-1;
    int mid = start + (end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid; // return key element of index
        }
        // go to right wala part
        if(key>arr[mid]){
            start=mid+1;
        }
        // go to left wala part
        else{
            key<arr[mid];
            end=mid-1;
        }
        mid= start + (end-start)/2;
    }

    return -1; // if we reach here that means key element is not present in array list

}
int main(){
    int even[6]={2,4,6,8,12,18};
    int odd[5]={3,8,11,14,16};
    int evenIndex = binarySearch(even, 6, 4);
    cout<< " Index of 4 is "<< evenIndex << endl;
    int oddIndex = binarySearch(odd,5,20);
    cout<<" Index of 20 is "<< oddIndex<<endl;


}
