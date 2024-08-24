#include<iostream>
using namespace std;
class B{
    public:
    int a;
    int b;

    public:
    int add(){
        return a+b;
    }

// '+' opeartor
    void operator + (B &obj){
        int value1 = this -> a;
        int value2 = obj.a;
        cout<<"output "<< value2 - value1 << endl;
    }

// '()' operator
    void operator () (){
        cout<<"Mai bracket hu: "<<this->a <<endl;
    }
};


int main(){
    B obj1, obj2;
    obj1.a = 4;
    obj2.a = 7;
    
    obj1 + obj2;  // output 3
    obj1();  // Mai bracket hu: 4

}