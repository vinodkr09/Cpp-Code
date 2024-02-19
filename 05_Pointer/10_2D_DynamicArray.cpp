// number of row and column are same

#include<iostream>
using namespace std;
 int main(){
    int n;
    cin>>n;
     
     // creating a 2D array
     int **arr = new int*[n];
     for(int i=0; i<n; i++){
        arr[i] = new int[n];
     }

     // taking input
     cout<<"Enter elements of the matrix : "<<endl;
     for(int i =0 ; i<n; i++){     // for  rows
        for(int j=0; j<n; j++){     // for  columns
       cin >> arr[i][j];
        }
     }


     // taking output
     cout<<"The entered matrix is : "<<endl;
     for(int i =0 ; i<n; i++){     // for  rows
        for(int j=0; j<n; j++){     // for  columns
       cout << arr[i][j]<< " ";
        }
        cout<<endl;
     }


     // releasing memory
     for(int i=0; i<n; i++){
      delete[] arr[i];  // deleted  each row one by one.
     }

     delete[] arr;  // deleted  the whole table at once,  if we don't do this, it will create a memory leak.

 }


 
 