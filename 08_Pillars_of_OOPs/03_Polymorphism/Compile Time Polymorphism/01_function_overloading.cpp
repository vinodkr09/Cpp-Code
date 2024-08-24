// function overloading-> function with same name but different parameters

#include<iostream>
using namespace std;

class A {
    public:
    void sayHello(){
        cout<<"Hello saket Anand"<< endl;
    }

    int sayHello(int num){
        cout<<"Your number is: " << num << endl;
        return 1;

    }

    void sayHello(string name){
        cout<<"Hello chiks "<< name <<endl;
    }

};

int main(){
    A obj;
    obj.sayHello();
    obj.sayHello(5);
    obj.sayHello("You are so cute");
    return 0;

}