#include<iostream>
using namespace std;
int getSum(int arr[], int size){

    //Base Case
    if(size == 0){
        return 0;
    }
    if(size == 1){
        return arr[0];
    }

    // Recursive case
    int remainingPart = getSum(arr+1, size-1);
    int sum = arr[0] + remainingPart;
    return sum;
}



int main(){
    int arr[] = {2,4,6,8,10};
    int size =  sizeof(arr)/sizeof(arr[0]);
    int sum = getSum(arr, size);
    cout<< " Sum of Array is: " << sum << endl;  // output is 30
    return 0;

}