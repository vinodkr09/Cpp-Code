// Different number of row and column

#include<iostream>
using namespace std;
int main(){
    int row;
    cin>>row;

    int col;
    cin >> col;
     
     // creating a 2D array
     int **arr = new int*[row];
     for(int i=0; i<row; i++){
        arr[i] = new int[col];
     }

     // taking input
     cout<<"Enter elements of the matrix : "<<endl;
     for(int i =0 ; i<row; i++){     // for  rows
        for(int j=0; j<col; j++){     // for  columns
       cin >> arr[i][j];
        }
     }


     // taking output
     cout<<"The entered matrix is : "<<endl;
     for(int i =0 ; i<row; i++){     // for  rows
        for(int j=0; j<col; j++){     // for  columns
       cout << arr[i][j]<< " ";
        }
        cout<<endl;
     }

     // releasing memory
     for(int i=0; i<row; i++){
      delete[] arr[i];  // deleted  each row one by one.
     }

     delete[] arr;  // deleted  the whole table at once,  if we don't do this, it will create a memory leak.





}