#include<iostream>
using namespace std;
void print(int *ptr){
    cout << "value is : "<< *ptr << endl;
}


void update(int *ptr){
   *ptr = *ptr + 1; // same as ptr++ or ++*ptr or  (*ptr)++

}
  

  // here int arr[] or *arr both  are the same thing bcz size is same i.e 8 byte
int getSum(int arr[], int n){
    cout << endl << "size :" << sizeof(arr) << endl;
    int sum =0;
    for(int i =0; i<n; i++){
        sum = sum + arr[i];  // or  sum += arr[i]
    }
    return sum;

}

int main(){
    int value = 5;
    int *ptr = &value;
    print(ptr);


    cout<< "before updtae value is : "<< *ptr << endl;
    update(ptr);
    cout<< "After update value is : "<< *ptr << endl;
     
int arr[5] = {1,2,3,4,5};
    cout << " sum is:  "<< getSum(arr,5)<<endl;

     return 0;

}