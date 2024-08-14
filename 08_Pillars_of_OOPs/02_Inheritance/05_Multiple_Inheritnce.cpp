#include<iostream>
using namespace std;

class Animal{
    public:
    int age = 10;
    int weight;

    public:
    void bark(){
        cout<<"dog is barking" << endl;
    }
};

class Human{
    public:
    string color;

    public:
    void speak(){
        cout<<"Dog is Speaking"<< endl;
    }
};

// Multiple Inheritance
class Hybrid: public Animal, public Human{

};


int main(){
    Hybrid beba;
    beba.bark();
    beba.speak();

    return 0;
    
}