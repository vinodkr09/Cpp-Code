#include<iostream>
using namespace std;
void swapAlternate(int arr[], int n){    // n is the size of the array length i.e 8 and 5
    for(int i=0;i<n;i=i+2){
        if(i+1<n){    //"i+1" current index and next of currentb element that is to be swap
            swap(arr[i], arr[i+1]);
        }

    }
}
void printArray(int arr[], int n){  // "n" is the size of the array length i.e 8 and 5
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int even[8]={4,5,2,7,10,45,32,76};
    int odd[5]={7,9,2,10,23};
    swapAlternate(even,8);
    printArray(even,8);
    cout<<endl;
    swapAlternate(odd,5);
    printArray(odd,5);
    return 0;

}