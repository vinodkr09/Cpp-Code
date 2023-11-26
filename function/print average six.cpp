#include<iostream>
using namespace std;
void printAverage(int a, int b){
    int avg=a+b/2;
    cout<<avg<<endl;
}
int main(){
    int a=10, b=30;
    printAverage(a,b);

}