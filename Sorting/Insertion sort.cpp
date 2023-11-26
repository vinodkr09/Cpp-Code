#include <iostream>
using namespace std;
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int temp = arr[i];    // current value is stored in temp variable
        int j = i - 1;

        // Move elements of arr[0..i-1], that are greater than current_element,
        // one position ahead of their current position
        while (j >= 0 && temp < arr[j]) {
            // shift
            arr[j + 1] = arr[j];
            j--;
        }

        // Insert the current_element into its correct position
        arr[j + 1] = temp ;
    }
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n);

    cout << "Sorted array is:";
    for (int i = 0; i < n; i++) {
        cout << " " << arr[i];
    }
    cout << endl;

    return 0;
}