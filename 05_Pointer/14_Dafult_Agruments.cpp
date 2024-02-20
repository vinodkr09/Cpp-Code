#include<iostream>
using namespace std;
void print(int arr[], int n, int start =0){
    for(int i=start; i<n; i++){
        cout<<arr[i]<<endl;
    }
}

 int main(){
    int arr[5] = {1,4,5,7,8};
    int size =5;
    print(arr, size);  // output:  1 4 5 7 8
    cout<< endl;
    print(arr, 5, 2);  // output: 5 7 8
    return 0;



 }