#include<iostream>
using namespace std;

class Animal{
    public:
    int age = 10;
    int weight;

    public:
    void speak(){
        cout<<"dog is speaking" << endl;
    }
};

class Dog: public Animal{

};

// Multilevel Inheritance
class GermanShepherd: public Dog{

};


int main(){
    GermanShepherd AmankaKutaa;
    AmankaKutaa.speak();
    
    return;


}