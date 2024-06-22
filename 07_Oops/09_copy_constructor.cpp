#include<iostream>
using namespace std;

class Hero {
private:
   int health;

public:
    char level;

    //Defalut constructor
    Hero(){
        cout<<"Simple constructor is called";
    }

// parameterized constructor
Hero(int health){
    cout<<"this -> "<<this<< endl;
 this -> health = health;
}  

// parameterized constructor
   Hero(int health, char level){
    this -> health = health;
    this -> level = level;
   }

// copy constructor
Hero(Hero &temp){    // temp is object
   cout<<"copy constructor is called" << endl;
    this->health = temp.health;
    this->level = temp.level;
}

    void print(){
        cout<< "health: " << this->health << endl;
        cout<< "level: " << this->level<< endl;
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
    Hero suresh(70, 'C');  // parametrized  object constructor 
    suresh.print();

    Hero ritesh(suresh);  // copy constructor means ritesh me copy kar do suresh ko.
    ritesh.print();
}