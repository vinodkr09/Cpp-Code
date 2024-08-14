#include<iostream>
using namespace std;

class Human{

    public:
    int height=23;
    int weight = 56;
    int age = 25;

    public:
    int getAge(){
        return this->age;
    }

    void setWeight(int w){
        this->weight = w;
    }

};

class Male: public Human{
    
    public:
    string color= "white";
    void sleep(){
        cout<<"Male is Sleeping" << endl;
    }

};

int main(){
    Male saket;
    cout<<saket.age <<endl;
    cout<<saket.weight<< endl;
    cout<<saket.height<< endl;

    cout<<saket.color<<endl;

    saket.setWeight(84);
    cout<<saket.weight<<endl;
    saket.sleep();

    return 0;



}
