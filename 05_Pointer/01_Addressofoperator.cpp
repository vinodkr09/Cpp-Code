#include<iostream>
using namespace std;
int main(){
    int num = 5;
    cout<< "num"<<endl;
     
     //address of opertor - & which is called mpercent
     cout<< "address of num is "<< &num <<endl;
     int *ptr = &num;

     // only ptr, gives address
     cout<< "Address is :" << ptr <<endl;

     // *ptr that is derefernce operator which gives value of address
     cout<< "value is : " << *ptr << endl;
     
     double d = 4.3;
     double *ptr2 = &d;
     cout<< "Address is :" <<ptr2 <<endl;
     cout<< "value is :" << *ptr2 <<endl;

     cout << "Size of integer is " << sizeof(num) <<endl;
    cout << "Size of pointer is " << sizeof(ptr) <<endl;
    cout << "Size of pointer is " << sizeof(ptr2) <<endl;

     return 0;

}