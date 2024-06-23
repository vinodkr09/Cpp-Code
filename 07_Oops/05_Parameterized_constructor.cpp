#include<iostream>
using namespace std;

class Hero {
private:
   int health;

public:
    char level;

// parameterized constructor
Hero(int health){
    cout<<"this -> "<<this<< endl;
 this -> health = health;
}   

    void print(){
        cout<< level << endl;
    }
    
    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health = h;
    }

   void setLevel(char ch){
    level = ch;
   }
    
};

int main(){

    // object is created statically and constructor is called.
    Hero ramesh(80);
    cout<<"Address of ramesh "<< &ramesh << endl;
    ramesh.getHealth();

    // dynamically
    Hero *h = new Hero(12);
}