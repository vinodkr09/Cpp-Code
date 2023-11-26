#include<iostream>
using namespace std;
void mergeSort(int arr1[], int n, int arr2[], int m, int arr3[]){
    int i=0, j=0, k=0;
    while(i<n && j<m){
        // compare the elements from the start of both the array and place the smallest one at the at the first of arr3[]
        if(arr1[i] < arr2[j]){
            arr3[k] = arr1[i];
            k++;
            i++;
        }
        else{
            arr3[k]= arr2[j];
            k++;
            j++;
        }
    }
    // if there is any remaining elements in arr1 then copy them in arr3
    while(i<n){
        arr3[k] = arr1[i];
        k++;
        i++;
    }
    // if there is any remaining elemnts in arr2 then  copy them in arr3
    while(j<m){
        arr3[k] = arr2[j];
        k++;
        j++;
    }

}
void print(int ans[], int n){
    for(int i=0;i<n;i++){
        cout<< ans[i] << " ";
    }
    cout<< endl;
}


int main(){
    int arr1[5] = {1,3,5,7,9};
    int arr2[3] = {2,4,6};
    int arr3[8] = {0};
    mergeSort( arr1, 5, arr2, 3, arr3);
    print(arr3, 8);
    return 0;
}