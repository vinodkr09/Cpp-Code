#include<iostream>
using namespace std;
double findarea(double radius){
    double area=3.14*radius*radius;
    return area;
}
int main(){
    int radius=5;
    double c=findarea(radius);
    cout<<c<<endl;
}