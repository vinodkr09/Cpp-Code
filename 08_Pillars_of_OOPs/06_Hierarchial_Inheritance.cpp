// In  Hierarchial Inheritance, one class serve as parent class for more than 1 class.

#include <iostream>
using namespace std;

// Hierarchial Inheritance
class A {
    public:
    void func1(){
        cout<<"Inside function 1" << endl;
    }
};

class B: public A{
    public:
    void fun2(){
        cout<<"Inside function 2"<< endl;
    }
};

class C: public A {
    public:
    void fun3(){
        cout<<"Inside function 3"<< endl;
    }
};

int main(){
    A object1;
    object1.func1();

    B object2;
    object2.func1();
    object2.fun2();

    C object3;
    object3.fun3();
    object3.func1();

    return 0;

       

}