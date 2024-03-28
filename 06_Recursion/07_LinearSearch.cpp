#include<iostream>
using namespace std;
bool LinearSearch(int arr[], int size, int key){

    // Base Case
    if(size == 0) //  If the array is empty
    return false;
    
    // If the element is present
    if (arr[0] == key){ 
        return true;
    }
    else{
        bool remainingPart = LinearSearch(arr+1, size-1, key);  // Recursive case
        
        // Return true if the  element is found in the remaining part of the array
        return remainingPart;

    }

}

int main(){
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(arr[0]); //size of the  array
    int key = 10;
    bool ans = LinearSearch(arr, size, key);
    if(ans){
        cout << " Key is present in Array" << endl;
    }
    else{
        cout<< "Key is not present in Array" << endl;
    }
    return 0;

}