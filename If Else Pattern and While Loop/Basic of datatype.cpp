#include<iostream>
using namespace std;
int main()
{
    int a=10,b=30,c;
    c=a+b;
    cout<<c<<endl;
    char d='x'; // character is always in single quotes
    cout<<d<<endl;
    float f=2.65; // it hold decimal number
    cout<<f<<endl;
    double g=45.5746664778487478;  // it can hold 15 to`16 digits before and after decimal and can also hold minus value like -3.455454565554
    cout<<g<<endl;
    bool v=true; // bool stands for boolean whether it is true or false
    int size=sizeof(f); //used to know the size of the float
    cout<<size<<endl;
    // Adding two numbers by taking input from users
    int s,k,sum;
    cout<<"Enter Two Numbers"<<endl;
    cin>>s>>k;
    sum=s+k;
    cout<<"sum of two numbers:"<<endl;
    cout<<sum<<endl;


}
