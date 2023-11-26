#include<iostream>
using namespace std;
bool search(int arr[], int size, int n){
    for(int i=0;i<n;i++){
        if(arr[i]==n){
            return 1;  // return 1 means TRUE 
        }
    }
    return 0; // return 0 means FALSE it us not found in array list
}
int main(){
    int arr[10]={5,34,45,88,100,300,14,70,42,78};
    cout<<"Enter the element that you want to search"<<endl;
    int n;
    cin>>n;
    bool found=search(arr, 10, n);
    if(found){
        cout<<"KEY IS PRESENT"<<endl;
    }
    else{
        cout<<"KEY IS NOT PRESENT"<<endl;
    }
    return 0;

}