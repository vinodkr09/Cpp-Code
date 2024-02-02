#include<iostream>
using namespace std;
int main(){
    /*
    int arr[10] = {2, 5, 6};
    cout<< "address of first memory block is " << arr << endl;  // gives output as 1st location address
    cout<< arr[0]<< endl;  // gives output value at zero index i.e 2
    cout<< "address of first memory block is " << &arr[0] <<endl;   // gives output as 1st location address
    cout << "4th :" << *arr <<endl;  // output is 2
    cout << "5th : " << *arr + 1 << endl;  // output is 3
    cout << "6th : " << *(arr + 1) << endl;  //output is 5
    cout << "7th : " << *(arr) + 1 << endl;  // output is 3
    cout << "8th : " << arr[2]<< endl;    // output is 6
    cout << "9th : " << *(arr + 2) << endl;   // output is 6
    */


   int temp[10] = {1,2};
   cout<< sizeof(temp) <<endl;
   cout<< sizeof(*temp) <<endl;
   cout<< "1st: " << sizeof(&temp)<<endl;

   int *ptr = &temp[0];
   cout<< sizeof(ptr) <<endl;
   cout<< sizeof(*ptr) <<endl;
   cout<< sizeof(&ptr) <<endl;




    return 0;


}