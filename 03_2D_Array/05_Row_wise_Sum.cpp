#include<iostream>
using namespace std;

// to print Row wise sum function
void printSum(int arr[][3], int row, int col){
    cout<<"Printing the row sum"<<endl;
    for(int row=0; row<3; row++){
        int sum = 0;
        for(int col=0; col<3; col++){
            sum +=arr[row][col];   // += is compound assignment operator that add the value of row and column in sum which was intitial zero.
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}

int main (){
    int arr[3][3];
    cout<<" Enter the elements of the array"<<endl;

    //taking row wise input
    for(int row =0; row<3; row++){
        for(int col=0; col<3; col++){
            cin>>arr[row][col];
        }
    }

    //printing array elements
    cout<<"printing the array elements"<<endl;
    for(int row =0; row<3; row++){
        for(int col=0; col<3; col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
 
 printSum(arr, 3, 3);
 return 0;


}