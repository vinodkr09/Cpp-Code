#include<iostream>
using namespace std;
void sortArray(int *arr, int n){

    //base case- already sorted
    if(n == 0 || n ==1){
        return;
    }

   // 1 case solve kar lia - largest elememt ko end tak pahuncha do
   for(int i =0; i<n-1; i++){
    if(arr[i] > arr[i+1]){
        swap(arr[i], arr[i+1]);
    }
   }

   // Recursive call - baki recursion khud ba khud solve kar dega
   sortArray(arr, n-1);
}


int main(){
    int arr[]= {2,5,1,6,9};
    sortArray(arr, 5);
    cout<<"Sorted array is :"<<endl;
    for (int i = 0; i < 5; i++)
    	cout<< arr[i]<<endl;
    return 0;

}