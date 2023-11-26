#include<iostream>
using namespace std;
void selectionSort(int arr[], int size){
    for(int i=0; i < size-1; i++){
        int minIndex=i;


    //Find the index of the minimum element in the unsorted portion
    for(int j=i+1; j<size; j++){
        if(arr[j] < arr[minIndex]){
            minIndex=j;
        }
    }

    // Swap the minimum element with the first element of the unsorted portion
    swap(arr[minIndex], arr[i]);
    }
}
int main(){
    int arr[]= {64,25,12,22,11};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<< "Original Array: ";
    for(int i=0; i<size; i++){
        cout<< arr[i]<<" ";
    }
    cout<<endl;
    selectionSort(arr, size);
    cout<< "sorted Array: ";
    for(int i=0; i<size; i++){
        cout<< arr[i]<< " ";
    }
    cout<< endl;
    return 0;

}