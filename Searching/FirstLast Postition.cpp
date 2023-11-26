#include<iostream>
using namespace std;
int firstOcc(int arr[], int n, int key){
    int start=0, end=n-1;
    int mid = start + (end-start)/2;
    int ans = -1;
    while(start<=end){
        if(arr[mid]==key){     // when key and mid both become equal
            ans=mid;
            end=mid-1;
        }
        else if(key>arr[mid]){    // Right wala
            start=mid+1; 
        }
        else{
            (key<arr[mid]);     // Left wala
            end=mid-1;
        }
        mid= start + (end-start)/2;
    }
    return ans;
}
int lastOcc(int arr[], int n, int key){
    int start=0, end=n-1;
    int mid = start + (end-start)/2;
    int ans=-1;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            start=mid+1;
        }
        else if(key>arr[mid]){   // Right wala
            start=mid+1;
        }
        else{
            (key<arr[mid]);     // Left wala
            end=mid-1;
        }
        mid= start + (end-start)/2;
    }
    return ans;
}

int main(){
    int even[11] = {1,2,3,3,3,3,3,3,3,5,7};
    int evenIndex = firstOcc(even, 11, 3);
    cout<< "First occurence of 3 is at Index "<< evenIndex <<endl;
    int lastIndex = lastOcc(even, 11, 3);
    cout<< "Last occurence of 3 at Index "<< lastIndex << endl;
    return 0;
    
}