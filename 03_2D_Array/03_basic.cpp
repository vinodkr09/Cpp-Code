//intilizing 2-D Array
#include<iostream>
using namespace std;
int main(){
    //create 2D array
    int arr[3][4] = {{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};


    //print
    for(int row=0; row<3; row++){
        for(int col=0; col<4; col++){
            cout << arr[row][col] << " ";
        }
        cout<<endl;
    }

    return 0;

}