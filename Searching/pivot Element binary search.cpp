// EXPLANATION : Graph banao MINIMUM ELEMENT jo hoga usko pivot maan lo.
#include<iostream>
using namespace std;
int getpivot(int arr[], int n){
    int start=0, end=n-1;
    int mid = start + (end-start)/2;
    while(start<end){
       if (arr[mid]>=arr[0]){
        start =  mid + 1;
       }
       else{
        end=mid;
       }
       mid = start + (end-start)/2;
    }
    return start;
}
int main(){
    int arr[8]={5,8,10,17,20,25,30,1};
    cout<< " pivot element is " << getpivot(arr, 8) <<endl;

}