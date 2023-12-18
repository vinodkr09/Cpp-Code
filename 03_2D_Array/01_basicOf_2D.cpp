#include<iostream>
using namespace std;
int main(){
    // create 2-D Array
    int arr[3][4];
    cout<< "Enter the elements"<<endl;

    //taking row wise input
   /* for(int row=0; row<3; row++){
        for(int column=0; col<4; col++){
            cin >> arr[row][col];
        }
    }
    */

    
   // taking column wise input
for(int col=0; col<4; col++){
        for(int row=0; row<3; row++){
            cin >> arr[row][col];
        }
    }



    //printing array elements
    cout << "printing array elements"<<endl;
    for(int row=0; row<3; row++){
        for(int col=0; col<4; col++){
            cout << arr[row][col] << " ";
        }
        cout<<endl;
    }

    return 0;
}
