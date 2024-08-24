#include<iostream>
using namespace std;
class Box{
    private:
    int width;

    public:
    Box(int w) : width(w) {}  // constructor

    // Declare the friend function
    friend int getWidth(Box &obj);

};

//define the friend function
int getWidth(Box &obj){
    return obj.width;
}

int main(){
    Box daba(10);
    cout<<"Width of box: "<< getWidth(daba)<<endl;
    return 0;
}

// output: Width of box: 10