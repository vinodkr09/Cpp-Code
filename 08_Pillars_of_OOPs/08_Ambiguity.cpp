// In Ambiguity, two class have same function name so compiler will not able to decide which function to call first. so we
// use reference opertaor to tell the complier that use that function first.

#include<iostream>
using namespace std;
class A {
    public:
    void func(){
        cout<<" I AM A"<<endl;
    }
};

class B{
    public:
    void func(){
        cout<<" I am B"<< endl;
    }
};

class C: public A, public B{

};

int main(){
    C obj;
    // obj.func();  both class have same function name so to solve this error we use scope resoltution operator

    obj.A::func();
    obj.B::func();
}