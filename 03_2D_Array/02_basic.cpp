//intilizing 2-D Array
#include<iostream>
using namespace std;
int main(){
    //create 2D array
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};


    //print array elements
    cout <<"Printing array elements" <<endl;
    for(int row=0; row<3; row++){
        for(int col=0; col<4; col++){
            cout << arr[row][col] << " ";
        }
        cout<<endl;
    }

    return 0;

}