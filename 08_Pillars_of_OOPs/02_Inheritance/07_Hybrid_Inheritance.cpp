// Combination of more than one type of Inheritance is called Hybrid Inheritrance. example: single Inheritance + multiple Inheritance

#include<iostream>
using namespace std;

// parent class 1
class Vehicle{
    public:
    void gadi(){
        cout<<"This is baut mast gadi"<<endl;
    }
    
};

// parent class 2
class Fare{
    public:
    void kharcha(){
        cout<<"Kharch bahut ho gaya"<< endl;
    }
};

// child class 1
class Car: public Vehicle{    // Single Inheritance

};

//child clas 2
class Bus: public Vehicle, public Fare {     // Multiple Inheritance

};

int main(){
    Bus obj1;
    obj1.gadi();
    obj1.kharcha();
    return 0;


}