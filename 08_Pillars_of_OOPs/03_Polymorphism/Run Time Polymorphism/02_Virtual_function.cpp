#include<iostream>
using namespace std;

class Animal {
    public:
    // virtual function
    virtual void sound() {
        cout<<"Animal makes a sound"<< endl;
    }

};

class Dog : public Animal {
    public:
    void sound() override {  // overriding the virtual function
        cout<<"Dog barks"<< endl;
    }
};


int main(){
    Animal *animalptr;     // Base class pointer
    Dog kutta;

    animalptr = &kutta;   // pointing to Dog object i.e kutta
    animalptr->sound();   // output: Dog barks

}