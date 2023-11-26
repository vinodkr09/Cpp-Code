// optimized code of BUBBLE SORT

#include <iostream>
using namespace std;
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        // Last i elements are already in place, so no need to check them
         bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            // Swap if the element found is greater than the next element
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        // If there were no swaps during a traversal of array then break. This means that array was already sorted and we can stop here.
        if(swapped== false){
          break;
        }
        

    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Unsorted array: ";
    for (int i = 0; i < n; i++) {
        cout<< arr[i] << " ";
    }
    cout<<endl;
    bubbleSort(arr, n);
    cout << " Sorted array: ";
    for (int i = 0; i < n; i++) {
      cout << arr[i] << " ";
    }

    return 0;
}