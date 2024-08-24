#include<iostream>
using namespace std;

class Car{
    public:
    void start(){
        cout<<"Car is started"<< endl;
    }

    private:
    void igniteEngine(){
        cout<<"Engine is enginted"<< endl;
    }

};


int main(){
    Car Bmw;
    Bmw.start();  // output: Car is started
    return 0;
}