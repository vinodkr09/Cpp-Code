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

int main(){
    Dog kutaa;
    kutaa.speak();
    cout<<kutaa.age<<endl;

    return 0;
}