//Linear serach in 2-D Array
#include<Iostream>
using namespace std;

bool isPresent(int arr[][4], int target, int row, int col){    // why do you need to speicify column size, when passing 2-D array as parameter
// to a function. ANS: bcz the compiler needs to know how much memory to allocate the array.

    for(int row=0; row<3; row++){
        for(int col=0; col<4; col++){
            if(arr[row][col] == target){
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    //create 2-D array
    int arr[3][4];
    cout << "Enter the element Of Array" <<endl;

    //taking row-wise input
    for(int row =0; row<3; row++){
        for(int col =0; col<4; col++){
            cin >> arr[row][col];
        }
    }

    //printing the array element
    for(int row =0; row<3; row++){
        for(int col =0; col<4; col++){
            cout << arr[row][col] << " ";
        }
        cout<< endl;
    }

    cout << "Enter the target element that you want to search"<<endl;
    int target;
    cin>>target;
    if(isPresent(arr, target, 3, 4)){
        cout << "Element is found"<<endl;
    }
    else{
        cout << "Element is not found"<<endl;
    }
return 0;


}