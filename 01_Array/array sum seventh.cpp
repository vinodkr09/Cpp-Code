#include<iostream>
using namespace std;
int calcsum(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum + arr[i];
        cout<<"sum of array elements:"<<sum<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   calcsum(arr,n);
   return 0;

}